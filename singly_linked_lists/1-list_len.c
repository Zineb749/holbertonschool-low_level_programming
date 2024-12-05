#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the elements of a linked list.
 * @h: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}


	return (count);
}

