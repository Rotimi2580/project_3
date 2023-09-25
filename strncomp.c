#include "shell.h"

/**
 * _strncmp - compar 2 strs till num
 * @s1: first string
 * @s2: string
 * @num: num compared
 * Return: 0 if same
 */

int _strncmp(const char *s1, const char *s2, size_t num)
{
	size_t index;

	for (index = 0; index < num; index++)
	{
		if (s1[index] == '\0' || s2[index] == '\0')
			return (s1[index] - s2[index]);

		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}
	return (0);
}

