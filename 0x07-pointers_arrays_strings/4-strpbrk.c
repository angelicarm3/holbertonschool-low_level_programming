#include "holberton.h"
/**
* _strpbrk - Searches for any of a set of bytes
*
* @s: String to be evaluated
* @accept: String to compare s to
*
* Return: Pointer to the byte s
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return ();
			}
		}
	}
	return (0);
}
