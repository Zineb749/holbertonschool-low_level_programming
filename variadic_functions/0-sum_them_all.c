#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all- sum of all parameters.
 * @n: character to be checked
 *
 *
 * Return: Nothing.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;
	int s = 0;
	va_list args;

	if (n == 0)

		return (0);

	va_start(args, n);


	for (i = 0; i < n; i++)


	{ x = va_arg(args, int);
		s += x;
	}

	va_end(args);

	return (s);

}


