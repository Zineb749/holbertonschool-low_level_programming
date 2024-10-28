/*
 * File: 0-isupper.c
 *
 */

#include "main.h"

/**
 * print_most_numbers - prints most numbers.
 *
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)

		if (c != 2 && c != 4)

			_putchar(c + '0');

	_putchar('\n');


}
