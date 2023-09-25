#include "shell.h"

/**
 * _print_s - code to print string
 * @s: pointer to a string
 * Return: characters printed
 */

int _print_s(char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
