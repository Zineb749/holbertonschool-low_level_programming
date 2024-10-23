#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("%d and %d is greater than 5\n", n, lastdigit);
	if (lastdigit == 0)
		printf("%d and %d is 0\n", n, lastdigit);
	if (lastdigit < 6 && lastdigit != 0)
		printf("%d and %d is less than 6 and not 0\n", n, lastdigit);
	return (0);
}
