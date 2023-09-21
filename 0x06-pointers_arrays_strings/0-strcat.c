#include "main.h"
/**
 * _strcat - this is a func to concatenates 2 strings
 * return: always 0
 * @dest: string with concatenation
 * @src: string to be concatenated
 */

char *_strcat(char *dest, char *src)
{
int lendest, lensrc;

lensrc = 0;
lendest = 0;

while (*(dest + lendest) != '\0')
{
lendest++;
}
while (*(src + lensrc) != '\0'; lendest < 97)
{
*(dest + lendest) = *(src + lensrc);
lendest++;
lensrc++;
}
*(dest + lendest) = '\0';
return dest;
}
