/*
 * File: 2-strlen.c
 *
 */

#include "main.h"

/**
 * _strlen - Checks if a character is uppercasee.
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')

	{	len++;

		s++;
	}

	return (len);

}
