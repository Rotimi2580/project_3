#include "shell.h"

/**
 * builtin_cmd - executes builtin commands
 * @tokns: collections of tokens
 * Return: a no on success else 11
 */
int builtin_cmd(char **tokns)
{
	int stat = 0;

	if (tokns != NULL && tokns[0] != NULL)
	{
		if (_strcmp(tokns[0], "exit") == 0 && tokns[1])
		{
			stat = _atoi(tokns[1]);
			free_mem(tokns);
			exit(stat);
		}
		else if (_strcmp(tokns[0], "env") == 0)
		{
			get_env();
			free_mem(tokns);
			return (0);
		}
		else if (_strcmp(tokns[0], "exit") == 0)
		{
			free_mem(tokns);
			exit(0);
		}
		else if (_strcmp(tokns[0], "cd") == 0)
		{
			run_cd(tokns);
			return (0);
		}
		else
			return (11);
	}
	return (11);
}
