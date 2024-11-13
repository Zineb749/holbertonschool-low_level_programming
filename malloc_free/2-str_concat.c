#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: if concatenation fails - NULL.
 *         else - a pointer the newly-allocated space in memory
 *         containing the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		result[concat_i++] = s2[i];

	return (result);
}
