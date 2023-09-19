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
char *cpy;
*cpy = dest;
src = *cpy;
dest = *cpy;
_putchar ('\n');
return (*dest);
}
