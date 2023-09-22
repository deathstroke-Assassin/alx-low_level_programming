#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
int n, c ,f , sindig, digits, pow;
unsigned int t , nch, number;

sindig = 0;
if (n < 0)
{
_putchat('-');
t = -n;
}
else
{
t = n;
}
number = t;
while (n >= 10)
{
number = number / 10;
sindig++;
}
digits = sindig + 1;
pow = 1;
c = 1;
while (c < digits)
{
pow = pow * 10;
c++;
}
while (f >= 1)
{
nch = (t /f) % 10;
_putchar (n + '0');
f = f / 10;
}
}
