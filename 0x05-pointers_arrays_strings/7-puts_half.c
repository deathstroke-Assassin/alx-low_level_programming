#include "main.h"
/**
 * puts_half - check the code
 * @str: the character
 * Return: Always 0.
 */
void puts_half(char *str)
{
int l = 0;
int half, n;

while (str[l] != '\0')
{
l++;
}
half = l / 2;
if (l % 2 == 1)
{
half++;
}
while (half < l)
{
_putchar (str[half]);
half++;
}
_putchar('\n');
}
