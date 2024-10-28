/*
 * File: 5-more_numbers.c
 *
 */

#include "main.h"

/**
 * more_numbers - prints numbers ten times.
 *
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; c <= 14; c++)

		_putchar(c + '0');

		for (i = 0; i < 10; i++)

			_putchar (i);

	_putchar('\n');

}
