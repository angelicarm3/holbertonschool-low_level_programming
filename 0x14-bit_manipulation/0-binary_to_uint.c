#include "main.h"
/**
* binary_to_uint - Converts a binary number to an unsigned int
*
* @b: Binary number (String)
*
* Return: Converted number or 0 if b is NULL or any\
* char is different form 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
	int len, base = 1;
	unsigned int ui = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		ui += (b[len] == '1') * base;
		base *= 2;
	}
	return (ui);
}
