/*
 * File: 5-rev_string.c
 *
 */

#include "main.h"

/**
 * rev_string - Checks if a character is uppercasee.
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void rev_string(char *s)
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

