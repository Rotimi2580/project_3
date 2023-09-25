#include "shell.h"

/**
 * _getenv - obtains environment variables
 * @path_key: value of env
 * Return: Null or env value
 */

char *_getenv(char *path_key)
{
	size_t x = _strlen(path_key);
	char *path_value;
	int dx;

	for (dx = 0; environ[dx]; dx++)
	{
		if (!_strncmp(environ[dx], path_key, x) && environ[dx][x] == '=')
		{
			path_value = environ[dx] + x + 1;
			return (path_value);
		}
	}
	return (NULL);
}
