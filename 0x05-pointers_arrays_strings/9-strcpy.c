#include "main.h"
#include <stdio.h>
/**
 * _strcpy - check the code
 * @dest: the character
 * @src: the character
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
char *cpy = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = ('\0');
return (cpy);
}
