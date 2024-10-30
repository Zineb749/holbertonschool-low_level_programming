/*
 * File: 1-swap.c
 *
 */

#include "main.h"

/**
 * swap_int - swaps values.
 * @a: The character to be checked.
 * @b: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}
