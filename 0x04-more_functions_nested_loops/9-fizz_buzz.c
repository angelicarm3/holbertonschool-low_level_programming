#include <stdio.h>
/**
* main - Prints numbers form 1-100, for multiples of 3 prints Fizz, for multiples of 5 prints Buzz, for multiples of 3 and 5 prints FizzBuzz and a new line.
*
* Return: 0
*/
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
		a++;
	}
	printf("\n");
	return (0);
}
