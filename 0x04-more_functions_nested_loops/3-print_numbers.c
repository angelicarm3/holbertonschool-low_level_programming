#include "holberton.h"
/**
* print_numbers - Prints the numbers, from 0 to 9 and a new line.
*
* Return: 0
*/
void print_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
