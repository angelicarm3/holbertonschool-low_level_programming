#include "holberton.h"

/**
* main - Prints "Holberton" and a new line.
*
* Return: 0
*/
int main(void)
{
	int str[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
	return (0);
}

