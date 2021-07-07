#include "holberton.h"
/**
* print_triangle - Print a triangle and a new line.
*
* @size: Triangle's size.
*
* Return: 0
*/
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - a); b++)
		{
			_putchar(32);
		}
		for (b--; b < size; b++)
		{
			_putchar(35);
		}
		if (a < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
