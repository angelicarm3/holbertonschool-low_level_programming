#include "holberton.h"
/**
* _islower - Checks for lowercase character.
*
* @c: ASCII code character.
*
* Return: 1 is c is lowercase or 0 otherwise
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
