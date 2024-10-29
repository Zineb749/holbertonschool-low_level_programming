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
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
