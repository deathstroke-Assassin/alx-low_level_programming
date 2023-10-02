#include "main.h"
/**
 * reverse_array - reverse an arrray.
 * @a: the array
 * @n: the number of chrs to swap
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int start, end, swap;

start = 0;
end = n - 1;
while (start < end)
{
swap = *(a + start);
*(a + start) = *(a + end);
*(a + end) = swap;
start++;
end--;
}
}
