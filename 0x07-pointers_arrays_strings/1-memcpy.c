#include "holberton.h"
/**
* _memcpy - Copies memory area
*
* @dest: Pointer to destination memory area
* @src: Pointer to source memory area
* @n: Bytes of memory
*
* Return: Char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
