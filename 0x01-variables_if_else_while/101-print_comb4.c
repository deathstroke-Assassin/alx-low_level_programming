#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - hi
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 48;
int y = 48;
int z = 48;
for (x = 48; x <= 55; x++)
{
for (y = 48; y <= 56; y++)
{
for (z = 48; z <= 56; z++)
{
if (x < y && y < z)
{
putchar (x);
putchar (y);
putchar (z);
if (x < 55 || y < 56  || z < 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar ('\n');
return (0);
}
