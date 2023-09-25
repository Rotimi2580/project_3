#include "shell.h"

/**
 *_strdup - duplicates a string
 *@strng: the string to duplicate
 *
 *Return: pointer to the duplicated string
 */

char *_strdup(const char *strng)
{
	int lenth = 0;
	int ij;
	char *retain;

	if (strng == NULL)
		return (NULL);

	while (strng[lenth])
		lenth++;

	retain = malloc((sizeof(char) * lenth) + 1);

	if (!retain)
		return (NULL);

	for (ij = 0; ij < lenth; ij++)
		retain[ij] = strng[ij];
	retain[ij] = '\0';

	return (retain);
}
