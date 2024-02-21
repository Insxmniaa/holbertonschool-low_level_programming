#include <stdio.h>
/**
 * main - Prints the alphabet on a line except e and q
 * Return: Always 0.
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	if (alpha == 'e' || alpha == 'q')
	alpha++;
	}
	putchar('\n');
	return (0);
}
