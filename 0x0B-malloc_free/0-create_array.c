#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array.
 * @c:char to fill the array
 * Description:  function that creates an array of chars, and initializes it
 * with a specific char.
 * Return: first char.
 */

char *create_array(unsigned int size, char c)
{
char *pt;
int i;
pt = (char *) malloc((sizeof(char) * size));
if (size == 0 || !pt)
{
return (NULL);
}
i = 0;
while (i < size)
{
pt[i] = c;
}
return (pt);
}
