#include <stdio.h>

/**
* main - Prints base 16 digits in lowercase.
*
* Return: 0
*/
int main(void)
{
	int i = '0';
	int I = 97;

	while (i <= '9')
	{
		putchar (i);
		i++;
	}

	while (I <= 102)
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
