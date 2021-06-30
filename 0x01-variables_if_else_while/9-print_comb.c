#include <stdio.h>

/**
* main - Print base 10 numbers followed by a , and a space
*
* Return: 0
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
		if (i != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
