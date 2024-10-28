/*
 * File: 1-isdigit.c
 *
 */

#include "main.h"

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)

		return (1);
	else
		return (0);

}
