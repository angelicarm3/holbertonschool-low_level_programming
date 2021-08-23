#include "main.h"
/**
* _strdup - Returns a pointer to a new allocated space in memory
* (copy of the string given)
*
* @str: String to be copied
*
* Return: Pointer a duplicated string or NULL if no enough memory or str = NULL
*/
char *_strdup(char *str)
{
	char *str_cpy = NULL;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		continue;
	str_cpy = malloc(sizeof(char) * (i + 1));
	if (str_cpy == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		str_cpy[j] = str[j];
	str_cpy[i] = '\0';
	return (str_cpy);
}
