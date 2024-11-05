#include "main.h"

/**
 * print_chessboard - function that print the chessboard
 * @a: the chessboard printed
 */

void print_chessboard(char (*a)[8])
{
	int ligne;
	int colonne;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colonne = 0; colonne < 8; colonne++)
			_putchar(a[ligne][colonne]);
		_putchar('\n');
	}
}
