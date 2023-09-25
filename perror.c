#include "shell.h"

/**
 * _perror - Handles malloc error
 * @tokns: array of tokens
 * Return: void
 */

void _perror(char **tokns)
{
	perror("malloc failed");
	free_mem(tokns);
}
