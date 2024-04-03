#include "main.h"
#include <stdio.h>
/**
 * _puts - function with one argument
 * @str: one char type argument
 * Return: none
 */
void _puts(char *str)
{
	int count = 0;

	for (int i = 0; i < strlen(*str); i++)
	{
		putchar(*(str + i));
	}
	putchar('\n);
}
