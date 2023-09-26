#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code
 * @a: the character
 * @n: the character
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int l;
for (l = 0; l < n; l++)
{
	printf("%d", a[l]);
	if (l != (n - 1))
	{
	printf(", ");
	}
}
putchar('\n');
}
