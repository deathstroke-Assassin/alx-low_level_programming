#include "main.h"
/**
 * _puts2 - check the code
 * @s: the character
 * Return: Always 0.
 */
void _puts2(char *s)
{
int l = 0;

while (str[l] != '\0')
{
if (l % 2 == 0)
{
_putchar (str[l]);
}
l++;
}
_putchar('\n');
}