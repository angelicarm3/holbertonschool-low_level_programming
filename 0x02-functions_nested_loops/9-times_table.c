#include "holberton.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*
* Return: 0
*/
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			x = i * j;
			if (x <= 9)
			{
				_putchar(' ');
				_putchar(x + 48);
			}
			else
			{
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
