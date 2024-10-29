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

	if (n <= 0)
		_putchar('\n');
	else
		for (int i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');

}
