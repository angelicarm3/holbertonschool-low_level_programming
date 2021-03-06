#include "main.h"
/**
* get_bit - Returns the value of a bit at a given index
*
* @n: Number to print in binary
* @index: The bit to print
*
* Return: Value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(n)) * 8)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
