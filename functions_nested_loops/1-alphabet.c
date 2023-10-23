#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Return: nothing.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
