#include "holberton.h"
/**
* *_strncat - Concatenates two strings.
*
* @dest: String 1
* @src: String 2
* @n: Bytes amount.
*
* Return: *dest.
*/
char *_strncat(char *dest, char *src, int n)
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

	for (tmp = 0; tmp < l && tmp < n; tmp++)
	{
		dest[i] = src[tmp];
		i++;
	}
	return (dest);
}
