#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - checkt
 * @b: integer to test
 * Return: pt or 98
 */
void *malloc_checked(unsigned int b)
{
unsigned int *pt;
pt = malloc(b);
if (!pt)
{
exit(98);
}
return (pt);
}
