#include "shell.h"

/**
 * _strtok - converts str to an array based delimiter
 * @s: str to be convertd to array
 * @dlm: the delimtr used to brk str
 * Return: array of the tokenized string
 */
char **_strtok(char *s, char *dlm)
{
	int ii = 0, ji = 0, ki = 0;
	int strlen = _strlen(s);
	char **array = (char **)malloc(sizeof(char *) * (strlen + 1));
	char *buffer = (char *)malloc(sizeof(char) * (strlen + 1));

	for (; ii < strlen + 1; ii++)
	{
		if (s[ii] != dlm[ii] && s[ii] != '\0')
		{
			buffer[ki] = s[ii];
			ki++;
		}
		else
		{
			if (ki > 0)
			{
				buffer[ki] = '\0';
				array[ji] = malloc(sizeof(char) * (ki + 1));
				_strcpy(array[ji], buffer);
				ji++;
				ki = 0;
			}
		}
	}

	array[ji] = NULL;
	free(buffer);

	return (array);
}
