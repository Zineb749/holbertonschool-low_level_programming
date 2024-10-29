#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int n;

	for (a = 1; a <= 100; a++)

		putchar(a + '0');

	putchar('\n');

	if (n % 5 == 0)
	{

		printf("Buzz");


		if (n % 3 == 0)

			printf("Fizz");
	}


	if (n % 3 == 0 && n % 5 == 0)

		printf("Fizz Buzz");
}
