#include "main.h"
/**
* set_bit - Sets the value of a bit to 1 at a given index
*
* @n: Number to print in binary
* @index: The bit to set to 1
*
* Return: 1 if it works or -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= (sizeof(n)) * 8)
	{
		*n = (1 << index) | *n;
		return (1);
	}
	return (-1);
}
