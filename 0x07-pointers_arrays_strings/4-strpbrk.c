#include "holberton.h"
/**
* _strpbrk - Searches a string for any of a set of bytes
*
* @s: String to be evaluated
* @accept: String to compare s to
*
* Return: Pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
