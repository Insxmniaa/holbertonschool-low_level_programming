#include <stdio.h>
/**
 * main - Prints alphabet in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');

	return (0);
}
