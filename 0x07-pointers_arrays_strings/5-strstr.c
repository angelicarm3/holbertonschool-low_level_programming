#include "holberton.h"
/**
* _strstr - Locates a substring
*
* @haystack: String to be evaluated
* @needle: Substring to look for
*
* Return: Pointer to beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
