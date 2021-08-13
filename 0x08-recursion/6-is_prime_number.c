#include "main.h"
/**
* evaluate_number - Checks if number is prime
*
* @n: Integer to be evaluated
* @d: Divisor
* Return: 1 if n is a prime number otherwise 0
*/
int evaluate_number(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (evaluate_number(n, d + 1));
}

/**
* is_prime_number - Returns 1 if the input integer is a prime number\
* otherwise return 0
* @n: Integer to be evaluated
* Return: 1 if the n a prime number or 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (evaluate_number(n, 2));
}
