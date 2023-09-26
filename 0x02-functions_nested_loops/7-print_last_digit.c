#include "main.h"
/**
 * print_last_digit - checks for character
 * @x: the number to check
 * Return: 1 if c is letter, 0 otherwise
 */
int print_last_digit(int x)
{
int v;
if (x < 0)
{
x = -x;
}
v = (x % 10);
if (v < 0)
{
v = -v;
}
_putchar(v + '0');
return (v);
}
