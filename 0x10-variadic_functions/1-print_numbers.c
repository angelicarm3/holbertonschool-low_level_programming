#include "variadic_functions.h"
/**
* print_numbers - Prints numbers, followed by a new line
*
* @separator: String to be printed between numbers
* @n: Number of integers passed to the function
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int number = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		if (separator == NULL || i == (n - 1))
		{
			printf("%d", number);
		}
		else
		{
			printf("%d%s", number, separator);
		}
	}
	printf("\n");
}
