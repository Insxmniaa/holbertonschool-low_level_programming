#include "main.h"

/**
 * swap_int - writes a function that swaps the value of two integers.
 *
 * @a: The first interger swapped. 
 * @b: The second interger to be swapped
 */
void swap_int(int *a, int *b)
{
        int tmp = *a;
	*a = *b;
	*b = tmp;
}
