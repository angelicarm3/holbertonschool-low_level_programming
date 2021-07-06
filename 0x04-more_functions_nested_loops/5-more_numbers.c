#include "holberton.h"
/**
* more_numbers - Prints 10 times the numbers 0-14 and a new line.
*
* Return: 0
*/
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar ((b / 10) + 48);
			}
				_putchar ((b % 10) + 48);
		}
		_putchar('\n');
	}
}
