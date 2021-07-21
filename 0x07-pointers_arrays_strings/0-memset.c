#include "holberton.h"
/**
* _memset - Fills memory with constant byte.
*
y* @s: Pointer to the memory are
* @b: Constant byte
* @n: Bytes of memory
*
* Return: Char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
