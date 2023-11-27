#include "main.h"
#include <stdio.h>

/**
 * main - prints the string "_putchar".
 * 
 * Return: always 0.
 */
int main(void)
{
        char c[] = "_putchar";
        int i;

        for(i = 0; i < 8; i++)
        {
                putchar(c[i]);
        }
        putchar('\n');
	return (0);
}
