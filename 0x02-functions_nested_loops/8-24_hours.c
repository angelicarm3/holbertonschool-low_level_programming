#include "holberton.h"
/**
* jack_bauer - Prints every minute of Jack Bauer's day, from 00:00-23:59
*
* Return: 0
*/
void jack_bauer(void)
{
	int h1 = 48, h2, m1, m2;

	while (h1 <= 50)
	{
		h2 = 48;
		while (h2 <= 57)
		{
			m1 = 48;
			while (m1 <= 53)
			{
				m2 = 47;
				while (m2 < 57)
				{
					if (h1 >= 50 && h2 >= 52)
						break;
					_putchar(h1);
					m2++;
					_putchar(h2);
					_putchar(58);
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
				m1++;
		        }
			h2++;
		}
		h1++;
	}
}
