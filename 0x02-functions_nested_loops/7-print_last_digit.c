#include "holberton.h"
/**
* print_last_digit - Prints the last digit of a number.
*
* @i: Integer
*
* Return: Value of last digit
*/
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	{
		_putchar(l);
	}
	return (l);
}
