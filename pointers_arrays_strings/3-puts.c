#include "main.h"
#include <stdio.h>
/**
 * _puts - function with one argument
 * @str: one char type argument
 * Return: none
 */
void _puts(char *str)
{
	while (*str != \0)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
