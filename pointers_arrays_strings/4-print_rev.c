/*
 * File: 0-isupper.c
 *
 */

#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end)
	{
		end++;
	}

	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}

	_putchar('\n');
}

