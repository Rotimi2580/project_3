#include "shell.h"

/**
 * _strcate - joins two strings
 * @destn: destn char
 * @srce: srce char
 * Return: new charactas
 */

void _strcate(char *destn, char *srce)
{
	int indx;
	int c = 0;

	while (destn[c])
	{
		c++;
	}
	for (indx = 0 ; srce[indx] != '\0' ; indx++)
		destn[c++] = srce[indx];
	destn[c] = '\0';
}
