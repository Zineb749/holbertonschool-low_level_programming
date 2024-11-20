#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates the string.
 * @array: name of the person
 * @size: character to be checked
 * @action: modifiction made in the the string.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	 size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}

