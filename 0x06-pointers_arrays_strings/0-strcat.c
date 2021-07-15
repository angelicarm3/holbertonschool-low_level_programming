#include "holberton.h"
/**
* *_strcat - Concatenates two strings
*
* @dest: String 1
* @src: String 2
*
* Return: *dest
*/
char *_strcat(char *dest, char *src)
{
	int l = 0, i, tmp;

	while (src[l] != '\0')
	{
		l++;
	}

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (tmp = 0; tmp < l; tmp++)
	{
		dest[i] = src[tmp];
		i++;
	}
	return (dest);
}
