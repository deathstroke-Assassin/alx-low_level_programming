#include "main.h"

/**
 * print_diagonal - prints the numbers, from 0 to 9,
 * followed by a new line
 * @n:followed by a new line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, z;

		for (i = 0; i <= n; i++)
		{
			for (z = 0; z <= n; z++)
			{
				if (z == i)
					_putchar('\\');
			}
			if (z < i)
					_putchar(' ');
		_putchar('\n');
		}
	}
}
