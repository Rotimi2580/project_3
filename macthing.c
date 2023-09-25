#include "shell.h"

/**
 * atchn - checks if a character matches any in a string
 * @cee: char to chck
 * @c: str to chck
 *
 * Return: 1 if match, 0 if not
 */
unsigned int atchn(char cee, const char *c)
{
	unsigned int id;

	for (id = 0; c[id] != '\0'; id++)
	{
		if (cee == c[id])
			return (1);
	}
	return (0);
}
