#include "holberton.h"
/**
* print_line - Draws a straight line, and a new line.
*
* @n: Number of times the character '_' should be printed.
*
* Return: 0
*/
void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}

