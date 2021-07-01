#include "holberton.h"
/**
* _isalpha - Checks for alphabetic character.
*
*@c: ASCII code character.
*
* Return: 1 if c is an upper/lowercase letter or 0 otherwise.
*/
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
