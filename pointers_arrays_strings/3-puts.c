#include "main.h"
#include <stdio.h>
/**
 * _puts - function with one argument
 * @str: one char type argument
 * Return: none
 */
void _puts(char *str)
{
	int i;

	for (i; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n);
}
