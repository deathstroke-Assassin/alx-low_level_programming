#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - checks for character
 * @n: 1 if c is letter, 0 otherwise
 * Return: 1 if c is letter, 0 otherwise
 */
void print_to_98(int n)
{
n = 0;
while (n <= 98)
{
printf("%d, ",n);
n++;
}
_putchar('\n');
}
