#include<stdio.h>
#include<stdlib.h>
/**
 * _calloc - checkt
 * @nmemb: integer to test
 * @size: size
 * Return: pt or 98
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *pt, i;
if (!nmemb || !size)
{
return (NULL);
}
pt = malloc(size * nmemb);
if (!pt)
{
return (NULL);
}
i = -1;
while (++i < (nmemb * size))
{
((char *)pt)[i] = 0;
}
return (pt);
}
