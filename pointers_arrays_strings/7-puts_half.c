/*
 * File: 0-isupper.c
 *
 */

#include "main.h"

/**
 * puts_half - prints half of thr string.
 * @str: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
