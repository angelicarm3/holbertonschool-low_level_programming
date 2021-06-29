#include <stdio.h>

/**
* main - Prints alphabet in lowercase and uppercase.
*
* Return: 0
*/
int main(void)
{
	int i = 97;
	int I = 65;

	while (i <= 122)
	{
		putchar (i);
		i++;
	}

	while (I <= 90)
	{
		putchar(I);
		I++;
	}
	return (0);
}
