#include "function_pointers.h"

/**
 * int_index - Print name
 * @array: 1
 * @size: 9
 * @cmp: 7
 *
 * Return:  fun no
 */

int int_index(int *array, int size, int (*cmp)(int))
{
size_t z;
z = -1;
if (size <= 0 || !cmp || !array)
{
return (-1);
}
while (++z < size)
{
if ((*cmp)(array[z]))
{
return (z);
}
}
return (-1);
}
