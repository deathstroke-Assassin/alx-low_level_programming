#include "main.h"
/**
 * _memcpy - fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: char
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *od = dest;
while (n--)
{
*src++ = dest;
}
return (od);
}
