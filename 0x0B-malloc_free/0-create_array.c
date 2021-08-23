#include "main.h"
/**
* create_array - Creates an array of chars initialized with a specific char
*
* @size: Array size
* @c: Initial char
*
* Return: Pointer to the array, or NULL if it fails or size = 0
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(sizeof(char) * size);
	if (str != NULL || size != 0)
	{
		while (i < size)
		{
			str[i] = c;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
