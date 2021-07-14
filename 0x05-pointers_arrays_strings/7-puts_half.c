#include "holberton.h"
/**
* puts_half - Prints half of a string, followed by a new line.
*
* @str: String to be printed.
*/
void puts_half(char *str)
{
	int l = 0, i, n;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = (l - 1) / 2; n < l - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
