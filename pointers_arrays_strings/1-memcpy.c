#include "main.h"

/**
 * *_memcpy - Copies memory.
 * @src: The character to be checked.
 * @dest: The character to be checked.
 * @n: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
