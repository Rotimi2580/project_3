#include "shell.h"

/**
 * run_cmd - runs the command
 * @tokns: tokens array
 * Return: void
 */

void run_cmd(char **tokns)
{
	char *full_cmd;

	if (tokns && tokns[0])
	{
		full_cmd = get_cmd_path(tokns[0]);
		if (full_cmd)
			execute_cmd(full_cmd, tokns);
		else
		{
			free(full_cmd);
			free_mem(tokns);
			_print_s("command not found");
			_print_s("\n");
			return;
		}
	}
	free_mem(tokns);
	return;
}
