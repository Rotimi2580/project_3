#include "shell.h"
/**
 * get_cmd_path - get full commad path
 * @first_cmd: first word you typed
 * Return: pointer to full command path
 */

char *get_cmd_path(char *first_cmd)
{
	char *path;
	char *tokenized_path;
	char *path_copy;
	char *cmd_path;
	char *delim = ":";
	int cmd_len;
	int path_len;

	path = _getenv("PATH");
	if (path)
	{
		path_copy = _strdup(path);
		cmd_len = _strlen(first_cmd);
		tokenized_path = strtok(path_copy, delim);
		while (tokenized_path)
		{
			path_len = _strlen(tokenized_path);
			cmd_path = (malloc(cmd_len + path_len + 2));
			_strcate(cmd_path, tokenized_path);
			_strcate(cmd_path, "/");
			_strcate(cmd_path, first_cmd);
			if (access(cmd_path, X_OK) == 0)
			{
				free(first_cmd);
				free(path_copy);
				return (cmd_path);
			}
			free(cmd_path);
			tokenized_path = strtok(NULL, delim);
		}
		free(path_copy);
	}
	if (access(first_cmd, X_OK) == 0)
		return (first_cmd);
	free(first_cmd);
	return (NULL);
}
