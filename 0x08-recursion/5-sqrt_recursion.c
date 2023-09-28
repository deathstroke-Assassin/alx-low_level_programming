#include "main.h"
/**
 * _sqrt - print rev string
 * @x: char too! no no
 * @y: char too! no no
 * Return: the l
 */
int _sqrt(int y, int x)
{
if (x * x == y)
{
return (x);
}
else if (x * x  > y)
{
return (-1);
}
return (_sqrt(y, x + 1));
}
/**
 * _sqrt_recursion - print rev string
 * @n: char too! no no
 * Return: the l
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
