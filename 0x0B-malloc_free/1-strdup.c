#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates an array of chars
 * @str: size of array.
 * Description:  function that creates an array of chars, and initializes it
 * with a specific char.
 * Return: first char.
 */

char *_strdup(char *str)
{
char *pt;
int i;
pt = malloc(sizeof(char) * strlen(str) + 1);
if (!str)
{
return (NULL);
}
if (!pt)
{
return (NULL);
}
i = -1;
while (str[++i] && pt != NULL)
{
pt[i] = str[i];
}
pt[i] = pt[i];
return (pt);
}
