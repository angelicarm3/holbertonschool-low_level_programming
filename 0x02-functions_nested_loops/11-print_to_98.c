#include <stdio.h>
/**
* print_to_98 - Prints all natural numbres from n to 98 and a new line.
*
* @n: Integer
*
* Return: 0
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
