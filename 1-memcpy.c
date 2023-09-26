#include "main.h"
/**
<<<<<<< HEAD
 * _memcpy - fills memory with a constant byte.
 * @src: char
 * @dest: char
=======
 * _memset - fills memory with a constant byte.
 * @s: char
 * @b: char
>>>>>>> e4024f0e22692a9e4024c95c8688f87ca17361eb
 * @n: char
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
return (dest);
=======
char *od = dest;
while (n--)
{
*src++ = od;
}
return (od);
>>>>>>> e4024f0e22692a9e4024c95c8688f87ca17361eb
}
