#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - search
 * Return: the target value index
 * @array: the array of int
 * @size: the n of int
 * @value: the value to search for
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
