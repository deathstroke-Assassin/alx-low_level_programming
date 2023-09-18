#include "main.h"
/**
 * void reset_to_98 - check the code
 * @n: the integer
 * @p: the pointer
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int *p;

*p = &n;
*p = 98;
}
