#include <stdio.h>

/**
* main - Print base 10 numbers
*
* Return: 0
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
