#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - returns the number of nodes.
 * @h: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}

