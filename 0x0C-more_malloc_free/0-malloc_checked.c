#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - checkt
 * @b: integer to test
 */
void *malloc_checked(unsigned int b)
{
unsigned int *pt;
*pt = malloc(b);
if (!)
{
exit(98);
}
return (pt);
}
