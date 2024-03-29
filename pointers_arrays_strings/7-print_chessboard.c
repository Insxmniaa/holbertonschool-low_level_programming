#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints out a chessboard
 *
 * @a: chessboard to print, 2D array [8] columns
 *
 * Return: always void
 */
void print_chessboard(char (*a)[8])
{
	int subC, primC = 0;

	while (primC < 8)
	{
		subC = 0;
		while (subC < 8)
			putchar(a[primC][subC++]);
		putchar('\n');
		primC++;
	}
}
