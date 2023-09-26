#include "main.h"
/**
 * _memcpy - fills memory with a constant byte.
 * @src: char
 * @dest: char
 * @n: char
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
return (dest);
}
