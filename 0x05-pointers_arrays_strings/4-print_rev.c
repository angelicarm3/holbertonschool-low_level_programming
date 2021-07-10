#include "holberton.h"
/**
* print_rev - Prints a string in reerse and a new line.
*
* @s: String to print.
*/
void print_rev(char *s)
{
	int l = 0;

	while (l >= 0)
	{
		if (s[l] == '\0')
		{
			break;
		}
		l++;
	}
	for (l--; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
