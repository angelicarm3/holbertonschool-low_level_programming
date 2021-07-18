#include "holberton.h"
/**
* leet - Encodes a string into 1337
*
* @s: String to be encoded
*
* Return: String
*/
char *leet(char *s)
{
	int i, j;

	char str1[10] = "AaEeOoTtLl";
	char str2[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
			}
		}
	}
	return (s);
}
