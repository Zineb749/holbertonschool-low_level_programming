
#include "main.h"

/**
 * _strchr - Checks if a character is uppercasee.
 * @c: The character to be checked.
 * @s: the character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

char *_strchr(char *s, char c)
{
		while (*s)
	{
		if (*s == c)

		return (s);

		s++;
	}

	return (0);

}

