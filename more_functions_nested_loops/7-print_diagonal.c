/*
 * File: 0-isupper.c
 *
 */

#include "main.h"

/**
 * print_daiagonal - Checks if a character is uppercasee.
 * @n: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
void print_diagonal(int n)
{

        int i;

        if (n <= 0)
                _putchar('\n');
        else
                for (i = 0; i < n; i++)
                        _putchar('\\');

        _putchar('\n');

}
