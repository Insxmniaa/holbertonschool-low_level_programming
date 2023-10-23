#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
print_alphabet_x10();
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	}
}
