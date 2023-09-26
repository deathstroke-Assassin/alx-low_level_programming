#include "main.h"
/**
<<<<<<< HEAD
 * _memcpy - fills memory with a constant byte.
 * @src: char
 * @dest: char
=======
<<<<<<< HEAD
 * _memcpy - fills memory with a constant byte.
 * @src: char
 * @dest: char
=======
 * _memset - fills memory with a constant byte.
 * @s: char
 * @b: char
>>>>>>> e4024f0e22692a9e4024c95c8688f87ca17361eb
>>>>>>> 25ed3288e9ab982653ffc90d085b5ff4d0979aaf
 * @n: char
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 25ed3288e9ab982653ffc90d085b5ff4d0979aaf
unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
return (dest);
<<<<<<< HEAD
=======
=======
char *od = dest;
while (n--)
{
*src++ = od;
}
return (od);
>>>>>>> e4024f0e22692a9e4024c95c8688f87ca17361eb
>>>>>>> 25ed3288e9ab982653ffc90d085b5ff4d0979aaf
}
