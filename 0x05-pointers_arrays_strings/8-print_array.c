#include <stdio.h>
/**
* print_array - Prints n elements of an array of integers and a new line
*
* @a: Array.
* @n: Number of elements of the array.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
