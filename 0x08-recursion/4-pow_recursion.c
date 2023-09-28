#include "main.h"
/**
 * _pow_recursion - print rev string
 * @x: char
 * @y: char too! no no
 * Return: the l
 */
int _pow_recursion(int x, int y)
{
int pow = x;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
pow *= _pow_recursion(x, y - 1);
return (pow);
}
