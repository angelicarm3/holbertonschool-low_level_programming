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
	int l = i % 10;

	if (l < 0)
	{
		l *= -1;
		_putchar(l + '0');
	}
	return (l);
}
