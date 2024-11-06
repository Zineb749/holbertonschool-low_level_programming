#include "main.h"

/**
 * *_memset - Function that fills the memory
 * @s: The string
 * @b: Character
 * @n: the first n byte
 * Return: A pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
