/*
 * File: 0-isupper.c
 *
 */

#include "main.h"

/**
 * print_diagonal - Checks if a character is uppercasee.
 * @n: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
