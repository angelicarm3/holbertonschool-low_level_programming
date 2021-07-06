#include "holberton.h"
/**
* print_diagonal - Draws diagonal line and a new line.
*
* @n: number of times the character '\' should be printed.
*
* Return: 0.
*/
void print_diagonal(int n)
{
	int a = 0, b;

	while (a < n)
	{
		b = 0;
		
		while (b < a)
		{
			_putchar(32);
			b++;
		}
		_putchar(92);
		a++;

		if(a <= (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
