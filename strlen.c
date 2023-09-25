#include "shell.h"

/**
 *_strlen - returns length of a string
 *@stri: string whose length to check
 *
 *Return: length of string
 *
 */

size_t _strlen(const char *stri)
{
	int i = 0;

	if (!stri)
		return (0);

	while (stri[i])
		i++;

	return (i);
}
