#include <stdio.h>
int a;
float b;
double c; 
char d;

int main (void)
{ 
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of char: %lu bytes\n", sizeof(char ));
	return 0;
}    
