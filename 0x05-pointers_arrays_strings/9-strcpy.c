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
int cpy;
cpy = *src;
*src = cpy;
_putchar ('\n');
return (dest);
}
