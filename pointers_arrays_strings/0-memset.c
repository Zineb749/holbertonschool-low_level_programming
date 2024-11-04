/*
 * File: 0-memset.c
 *
 */

#include "main.h"

/**
 * _memset - Checks if a character is uppercasee.
 * @s: The character to be checked.
 * @b: The character to be checked.
 * @n: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
