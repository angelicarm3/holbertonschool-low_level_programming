#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to the power of y
*
* @x: Number to be operated on
* @y: Numer to power x
*
* Return: -1 if y is lower than 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
