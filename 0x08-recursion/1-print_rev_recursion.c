#include "main.h"
/**
 * _print_rev_recursion - print rev string
 * @s: char
 */
void _print_rev_recursion(char *s)
{
if (!*s)
{
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
