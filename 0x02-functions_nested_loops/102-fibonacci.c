#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int z, v, x, y;
x = 0;
y = 1;
for (v = 1; v < 50; v++)
{
z = x + y;
x = y;
y = z;
printf("%d, ", z);
}
if (v == 50)
{
printf("%d", z);
}
printf("\n");
return (0);
}
