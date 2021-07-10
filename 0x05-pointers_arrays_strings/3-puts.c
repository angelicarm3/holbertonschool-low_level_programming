#include "holberton.h"
/**
* _puts - Prints a string and a new line to stdout
*
* @str: String to print.
*
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
