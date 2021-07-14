#include "holberton.h"
/**
* puts2 - Prints every other character of a string, starting with the \
* first character and a new line.
*
* @str: String to be printed.
*/
void puts2(char *str)
{
	int l = 0, i;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
