#include "holberton.h"
/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
*
* @a: String
*
* Return: Modified string
*/
char *string_toupper(char *a)
{
	int l;

	for (l = 0; a[l] != 0; l++)
	{
		if (a[l] >= 97 && a[l] <= 122)
		{
			a[l] = a[l] - 32;
		}
	}
	return (a);
}
