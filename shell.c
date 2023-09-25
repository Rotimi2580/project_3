#include "shell.h"

/**
 * main - code start function
 *
 * Return: 0 on success
 */
int main(void)
{
	char *inpt = NULL;
	char **tokns = NULL;
	int pipe = 0;

	if (isatty(STDIN_FILENO))
		pipe = 1;
	if (pipe == 0)
		prompt();
	while (1)
	{
		inpt = rid_inpt();
		if (inpt == NULL)
		{
			free(inpt);
			return (-1);
		}
		tokns = tokenizd_inpt(inpt);
		if (!tokns)
		{
			free_mem(tokns);
			continue;
		}
		if (builtin_cmd(tokns) == 11)
			run_cmd(tokns);
		free(inpt);
	}
	return (0);
}
