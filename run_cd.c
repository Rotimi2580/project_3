#include "shell.h"

/**
 * run_cd - executes builtin cd command
 * @tokns: array of pointers
 * Return: void
 */

void run_cd(char **tokns)
{
	if (!tokns[1])
	{
		chdir(_getenv("HOME"));
		if (!(chdir(_getenv("HOME"))))
			perror("HOME environment variable not set.\n");
		free_mem(tokns);
	}
	else if (_strcmp(tokns[1], "-") == 0)
	{
		chdir(_getenv("OLDPWD"));
		if (!(chdir(_getenv("OLDPWD"))))
			perror("No previous directory stored.\n");
		free_mem(tokns);
	}
	else
		chdir(tokns[1]);
}
