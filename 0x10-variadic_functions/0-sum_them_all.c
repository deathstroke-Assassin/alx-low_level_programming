#include<stdio.h>
#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - sum them all
 * @n: variadic input
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
	return (0);
va_list lst;
unsigned int x, sum;
va_start(lst, n);
for (x = 0; x < sum; x++)
{
	sum = (sum + va_arg(lst, const unsigned int));
}
va_end(lst);
return (sum);
}
