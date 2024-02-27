#include "main.h"
/**
 * swap_int - function w/ two int type pointer argument
 * a@: 1st argument int type
 * @b: 2nd argument int type
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
