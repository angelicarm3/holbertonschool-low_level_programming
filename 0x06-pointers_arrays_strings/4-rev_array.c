#include "holberton.h"
/**
* reverse_array - Reverses the content of an array of integers.
*
* @a: Pointer to the array of integers
* @n: Number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	n -= 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
