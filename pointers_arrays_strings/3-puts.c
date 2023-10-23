#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string followed by a new line.
 * @str: the string to be printed
 */
void _puts(char *str)
{ 
	while (*str)
		putchar(*str++);

	putchar('\n');
}
