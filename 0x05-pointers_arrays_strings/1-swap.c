#include "holberton.h"

/**
* swap_int - Swaps value of two integers.
*
* @a: First int
* @b: Second int
*/
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
