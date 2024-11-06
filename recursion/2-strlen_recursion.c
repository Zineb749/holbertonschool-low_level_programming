#include "main.h"

/**
 * _print_rev_recursion - prints a string
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')

		return (0);

	else
	{       _strlen_recursion(s + 1);

		_putchar(*s);
	}

	return (1);
}
