#include "shell.h"

/**
 * rid_inpt - readline typed in shell
 *
 * Return: pointer to store of string
 */

char *rid_inpt(void)
{
	ssize_t char_got;
	size_t count;
	char *store = NULL;

	prompt();

	char_got = getline(&store, &count, stdin);
	if (char_got == -1)
	{
		free(store);
		_print_s("exit");
		_print_s("\n");
		return (NULL);
	}
	if (store[char_got - 1] == '\n')
		store[char_got - 1] = '\0';

	return (store);
}
