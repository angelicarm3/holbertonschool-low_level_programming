#include "holberton.h"
/**
* *_strcmp - Compares two string
*
* @s1: String 1
* @s2: String 2
*
* Return: Difference between s1 and s2
*/
int _strcmp(char *s1, char *s2)
{
	int l;

	for (l = 0; s1[l] != '\0' && s2[l] != '\0'; l++)
	{
		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
	}

	return (0);
}
