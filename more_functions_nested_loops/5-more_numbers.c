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

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)

			if (c >= 10)

			_putchar((c  / 10) + '0');
	}
	_putchar('\n');

}
