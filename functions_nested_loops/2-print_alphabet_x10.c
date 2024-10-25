
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0 (Success)
 */

#include "main.h"
void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 0; i <= 10; i++)
	{

		for (c = 'a'; c <= 'z'; c++)

			_putchar(c);

	}
	_putchar('\n');

}
