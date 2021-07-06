#include "holberton.h"
/**
* print_most_numbers - Prints the numbers 0 - 9, but 2 and 4, and a new line.
*
* Return: 0.
*/
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
