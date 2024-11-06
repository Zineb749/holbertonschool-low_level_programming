

#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);

		_puts_recursion(s + 1);
	}

	_putchar('\n');

}

