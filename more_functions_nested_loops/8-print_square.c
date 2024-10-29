/*
 * File: 8-print_triangle.c
 *
 */

#include "main.h"

/**
 * print_square - prints a triangle.
 *@size : character to be checked
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
		b = 0;
		a++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
