#include "main.h"
/**
 * factorial - print rev string
 * @n: char
 * Return: the l
 */
int factorial(int n)
{
int result = n;
if (n >= 0)
{
n *= factorial(n - 1);
return (n);
}
else if (n >= 0 && n <= 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (result);
}