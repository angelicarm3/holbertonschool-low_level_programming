#include "holberton.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*
* Return: 0
*/
void times_table(void)
{
	int n = 48, m, p;

	while (n <= 57)
	{
		m = 49;
		while (m <= 57)
		{
			p = n * m;
			_putchar(p);
			p++;
		}
		m++;
	}
	n++;
}
