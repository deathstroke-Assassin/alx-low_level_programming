#include<stdio.h>
#include<stdlib.h>
/**
 * *_realloc - checkt
 * @ptr: integer to test
 * @old_size: size old
 * @new_size: size new
 * Return: pt or 98
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ralloc;
unsigned int z;
z = -1;
if (new_size == old_size)
{
return (ptr);
}
if (new_size <= 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
{
ralloc =  malloc(new_size);
if (!ralloc)
{
return (NULL);
}
}
if (new_size > old_size && ptr)
{
ralloc = malloc(new_size);
if (!ralloc)
{
return (NULL);
}
while (z < new_size)
{
while (++z < old_size)
{
((char *)ralloc)[z] = ((char *)ptr)[z];
}
((char *)ralloc)[z] = 0;
}
free(ptr);
}
return (ralloc);
}
