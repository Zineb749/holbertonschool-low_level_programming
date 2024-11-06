/*
 * File: 0-isupper.c
 *
 */

#include "main.h"

/**
 * factorial - prints factorial.
 * @n: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int factorial(int n)
{

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	else
	{
		return (n * factorial(n - 1));

		_putchar(n);
	}

}
