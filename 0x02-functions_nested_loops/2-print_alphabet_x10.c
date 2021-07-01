#include "holberton.h"
/**
* print_alphabet_x10 - Prints alphabet in lower case 10 times and a new line.
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
