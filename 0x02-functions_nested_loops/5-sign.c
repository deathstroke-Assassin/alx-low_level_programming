#include "main.h"
/**
 * print_sign - checks for character
 * @n: the number to check
 * Return: 1 if c is letter, 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
}
