#include <stdio.h>

/**
* main - Prints alphabet in lowercase except e and q.
*
* Return: 0
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		putchar (i);
		i++;
	}

	putchar('\n');
	return (0);
}
