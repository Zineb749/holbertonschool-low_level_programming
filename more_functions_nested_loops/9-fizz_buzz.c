#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;


	for (a = 1; a <= 100; a++)

		putchar(a + '0');

	putchar('\n');

	if (a % 5 == 0)
	{

		printf("Buzz");


		if (a % 3 == 0)

			printf("Fizz");
	}


	if (a % 3 == 0 && a % 5 == 0)

		printf("Fizz Buzz");

	return(0);
}
