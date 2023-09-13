#include "main.h"
/**
 * jack_bauer - checks for character
 * Return: 1 if c is letter, 0 otherwise
 */
void jack_bauer(void)
{
int x,v;
int x = 0;
while (x < 24)
{
int v = 0;
while (v < 60)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(':');
_putchar((v / 10) + '0');
_putchar((v % 10) + '0');
_putchar('\n');
v++;
}
x++;
}
}
