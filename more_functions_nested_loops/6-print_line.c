/*
 * File: 6-print_line.c
 *
 */

#include "main.h"

/**
 * print_line - prints line.
 *@n: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
