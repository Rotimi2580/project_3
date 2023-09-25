#include "shell.h"
/**
 * tokenizd_inpt - splits strings
 * @inpt: the string to splits
 * Return: pointer to split array
 */

char **tokenizd_inpt(char *inpt)
{
	char **tokns = NULL;
	char *tokenizd = NULL;
	char *copy_of_store = NULL;
	int i = 0, j = 0;

	copy_of_store = malloc(sizeof(char) * _strlen(inpt));
	if (!copy_of_store)
	{
		perror("tokns");
		free(inpt);
		free(copy_of_store);
	}
	_strcpy(copy_of_store, inpt);
	tokenizd = strtok(copy_of_store, " \n");
	while (tokenizd)
	{
		i++;
		tokenizd = strtok(NULL, " \n");
	}
	tokns = malloc(sizeof(char *) * (i + 1));
	if (!tokns)
	{
		free(copy_of_store);
		free(inpt);
		_perror(tokns);
	}
	tokenizd = strtok(inpt, " \n");
	while (tokenizd)
	{
		tokns[j] = malloc(sizeof(char) * (_strlen(tokenizd) + 1));
		if (tokns[j])
		{
			free(copy_of_store);
			free(inpt);
			_perror(tokns);
		}
		_strcpy(tokns[j++], tokenizd);
		tokenizd = strtok(NULL, " \n");
	}
	tokns[j] = NULL;
	free(inpt);
	free(copy_of_store);
	return (tokns);
}
