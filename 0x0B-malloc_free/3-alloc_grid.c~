#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - creates an array of chars
 * @s1: size of array.
 * @s2: size of array.
 * Description:  function that creates an array of chars, and initializes it
 * with a specific char.
 * Return: first char.
 */

char *str_concat(char *s1, char *s2)
{
char *pt;
int i;
int size1, size2;

(s1) ? size1 = strlen(s1) : (size1 = 0);
(s2) ? size2 = strlen(s2) : (size2 = 0);
pt = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
if (!pt)
{
return (NULL);
}
i = -1;
while (++i < size1)
{
pt[i] = *s1++;
}
while (i < (size1 + size2))
{
pt[i++] = *s2++;
}
return (pt);
}
