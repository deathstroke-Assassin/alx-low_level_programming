#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_most_numbers(void)
{
	int i;
	int n;
	int y;
	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				 _putchar(i / 10 + '0')
			}
			_putchar(i % 10 +'0')
		}
		_putchar('\n');
        }
}
