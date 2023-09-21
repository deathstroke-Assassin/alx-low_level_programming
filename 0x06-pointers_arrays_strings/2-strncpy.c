#include "main.h"
/**
 * _strncpy - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of the concatenated string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int cpy;
cpy = 0;
while (src[cpy] != '\0' && cpy < n)
{
*(dest + cpy) = *(src + cpy);
cpy++;
}
*(dest + cpy) = '\0';
return (dest);
}
