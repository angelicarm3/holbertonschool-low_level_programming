#include "main.h"
/**
* check_sqrt - Checks the natural square root
*
* @n: Number to evaluate
* @r: Number to compare
*
* Return: Natural root of n
*/
int check_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);

	return (check_sqrt(n, r + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number
*
* @n: Integer to evaluate
*
* Return: Natural square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check_sqrt(n, 1));
}
