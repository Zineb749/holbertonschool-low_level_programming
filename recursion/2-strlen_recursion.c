#include "main.h"

/**
 * _strlen_recursion - prints string length
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')

		return (0);

	else
	{    return 1 + _strlen_recursion(s + 1);

		_putchar(*s);
	}
}
