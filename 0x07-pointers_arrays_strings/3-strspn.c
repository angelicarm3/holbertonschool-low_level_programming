#include "holberton.h"
/**
* _strspn - Gets the length of a prefix substring.
*
* @s: Initial segment
* @accept: Second segment
*
* Return: Number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, byte, flag;

	byte = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				byte++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (byte);
		}
	}
	return (0);
}
