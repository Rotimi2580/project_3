#include "shell.h"

/**
 * _atoi -  changes a string to int
 * @s: str to convert
 *
 * Return: the int
 */

int _atoi(const char *s)
{
	int index = 0;
	int ret = 0;
	int flags = 1;

	if (s[0] == '-')
	{
		flags = -1;
		index++;
	}

	while (s[index])
	{
		if (s[index] < '0' || s[index] > '9')
		return (-2);

		ret = ret * 10 + (s[index] - '0');
		index++;
	}

	return (flags * ret);
}
