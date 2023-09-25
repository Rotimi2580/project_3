#include "shell.h"

/**
 *_strcpy - copies a string
 *@de: the desinatn
 *@sor: the source
 *
 *Return: pointer to destinatn
 */

char *_strcpy(char *de, const char *sor)
{
	int in = 0;

	if (de == sor || sor == 0)
		return (de);

	while (sor[in])
	{
		de[in] = sor[in];
		in++;
	}

	de[in] = '\0';

	return (de);
}
