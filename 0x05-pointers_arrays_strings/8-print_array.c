#include "main.h"
/**
 * print_array - check the code
 * @a: the character
 * @n: the character
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int l;
while (l < n)
{
printf("%d", a[n]);
l++;
if (l != (n - 1))
{
printf(", ");
}
}
_putchar('\n');
}
