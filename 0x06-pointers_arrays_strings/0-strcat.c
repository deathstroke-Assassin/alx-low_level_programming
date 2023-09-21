#include "main.h"
/**
 * _strcat - this is a func to concatenates 2 strings
 * return: always 0
 * @dest: string with concatenation
 * @src: string to be concatenated
 */

char *_strcat(char *dest, char *src)
{
char *stct = dest;

while (*stct){stct++;}
while (*src)
{
*stct = *src;
stct++;
src++;
}
*stct = '\0';
return dest;
}
