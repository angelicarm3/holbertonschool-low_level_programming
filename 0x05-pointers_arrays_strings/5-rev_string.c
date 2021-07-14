#include <stdio.h>
#include "holberton.h"
/**
* rev_string - Reverses a string.
*
* @s: String to be reversed.
*/
void rev_string(char *s)
{
	int l = 0, i, l1;
	char tmp;

	while (s[l] != '\0')
	{
		l++;
	}

	l1 = l - 1;

	for (i = 0; i < (l / 2); i++)
	{
		tmp = s[i];
		s[i] = s[l1 - i];
		s[l1 - i] = tmp;
	}
}
