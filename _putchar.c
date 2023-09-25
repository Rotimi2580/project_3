#include "shell.h"

/**
* _putchar -Writes a character to stdout
* @c: The character to be written
*
* Return: count of printed characters.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
