#include "function_pointers.h"
/**
 * print_name - print
 * @name: h
 * @f: - f
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
if (f && name)
{
(*f)(name);
}
}
