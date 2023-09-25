#include "shell.h"

/**
 * get_env - print all environment variables
 *
 * Return: void
 */

void get_env(void)
{
	int id = 0;

	while (environ[id])
	{
		_print_s(environ[id++]);
		_print_s("\n");
	}
}
