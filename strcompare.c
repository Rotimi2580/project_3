#include "shell.h"

/**
 * _strcmp - compare two strings for diff
 * @file1: string no one
 * @file2: string no two
 * Return: Always zero
 */

int _strcmp(char *file1, char *file2)
{
	int ind;

	for (ind = 0; file1[ind] != 0 && file2[ind] != 0; ind++)
	{
		if (file1[ind] != file2[ind])
			return (file1[ind] - file2[ind]);
	}

	return (0);
}
