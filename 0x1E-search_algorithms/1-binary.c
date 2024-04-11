#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - divide and conquer
 * Return: the index of the target
 * @array: the array of integers
 * @size: the total no of int
 * @value: the target
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; l <= r;)
	{
		printf("Searching in array ");
		for (m = l; m < r; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
