#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - creates an array of chars
 * @width: size of array.
 * @height: size of array.
 * Description:  function that creates an array of chars, and initializes it
 * with a specific char.
 * Return: first char.
 */
int **alloc_grid(int width, int height)
{
char a[][];
int i;
int u;

a = (int **)malloc(sizeof(int) * height);
if (!a || height <= 0 || width <= 0)
{
return (NULL);
}
while (++i < height)
{
*(a + i) = (int *)malloc(sizeof(int) * width);
if (!(a + i);
{
free(a);
for (j = 0; j <= i; j++)
{
free(*(a + i));
}
 return (NULL)
}
}
for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
return (a);
}
