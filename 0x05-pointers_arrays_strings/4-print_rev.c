#include "main.h"
/**
 * print_rev - check the code
 * @s: the character
 * Return: Always 0.
 */
void print_rev(char *s)
{
int l;

for (l = 0; s[l] != '\0'; l++)
;
for (l = l - 1; s[l] != '\0'; l--)
{
_putchar (s[l]);
}
_putchar('\n');
}
