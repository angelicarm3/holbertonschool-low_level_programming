#include "main.h"
/**
* flip_bits - Returns the number of bits you would need to flip\
* to get from one number to another
*
* @n: First number to compare
* @m: Second number to compare
*
* Return: number of bits you would need to flip to get from one\
* number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n = n ^ m;
	while (n > 0)
	{
		if (n & 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return (count);
}
