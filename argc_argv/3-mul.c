#include <stdio.h>
/**
 * main - Entry point
 *@argc: character to be checked.
 *@argv: charcter to be checked.
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{

	printf("%d \n", argc * argc);

	return (0);

	if (argc != 3)
	{
		printf("Error");

		return (1);
	}

}
