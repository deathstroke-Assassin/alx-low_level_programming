#include "main.h"
#include<stdio.h>
/**
 * add - checks for character
 * @y: 1 if c is letter, 0 otherwise
 * @x: 1 if c is letter, 0 otherwise
 * Return: 1 if c is letter, 0 otherwise
 */
int add(int x, int y)
{
int z, v;
x = 1;
y = 2;
for (v = 1; v < 50; v++)
{
z = x + y;
printf("%d, ", z);
}
if (v == 50)
{
printf("%d", z);
}
printf("\n");
return (0);
}
