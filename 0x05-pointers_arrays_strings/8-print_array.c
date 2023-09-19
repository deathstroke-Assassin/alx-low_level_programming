#include "main.h"
/**
 * print_array - check the code
 * @a: the character
 * @n: the character
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
while (a[n] != '\0')
{
printf("%d, ", a[n]);
}
_putchar('\n');
}
