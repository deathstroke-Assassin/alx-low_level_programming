#include "main.h"
/**
 * _print_rev_recursion - print rev string
 * @s: char
 */
void _print_rev_recursion(char *s)
{
if ((s[0] == '\0') || (s[0] < '\0'))
{
_putchar(s[0]);
_print_rev_recursion(s - 1);
}
_putchar('\n');
}
