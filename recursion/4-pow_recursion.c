
#include "main.h"

/**
 * _pow_recursion - prints factorial.
 * @x: The character to be checked.
 * @y: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _pow_recursion(int x, int y)
{

	if (y == 1)
		return (1);

	if (y < 0)
		return (-1);

	else
	{
		return (x * _pow_recursion(x, y - 1));

		_putchar(x);
	}

}
