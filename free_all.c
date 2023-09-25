#include "shell.h"

/**
 * free_mem - free memory
 * @tokns: strings to remove from memory
 * This function frees the mem allocated for each string in array
 * `tokns`, as well as the memory allocated for array
 * Return: void
 */

void free_mem(char **tokns)
{
	if (tokns)
	{
		int indx = 0;

		while (tokns[indx])
		{
			free(tokns[indx]);
			indx++;
		}

		free(tokns);
	}
}
