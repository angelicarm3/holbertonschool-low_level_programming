#include <stdio.h>
/**
* *_strcpy: Copies the string pointed to by src, including null byte (\0), to the buffer pointed to by dest.
*
* @src: String to be copied.
* @dest: Destination string.
*
* Return: *dest
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0, i;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
