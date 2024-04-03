#include "main.h"
/**
 * _puts - function with one argument
 * @str: one char type argument
 * Return: none
 */
void _puts(char *str)
{


	for (int i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
