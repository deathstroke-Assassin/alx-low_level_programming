#include "main.h"
/**
 * times_table - checks for character
 * Return: 1 if c is letter, 0 otherwise
 */
void times_table(void)
{
int x, y, z;
for (x = 0; x < 10 ; x++)
{
for (y = 0; y < 10 ; y++)
{
z = x * y;
if (y == 0)
{
_putchar(z + '0');
}
if (z < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
}
}
