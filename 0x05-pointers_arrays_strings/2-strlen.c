#include "main.h"
/**
 * _strlen - check the code
 * @s: the integer
 * Return: Always 0.
 */
int _strlen(char *s)
{
int l= 0;

while (*s != '\0')
{
l++;
s++;
}
return(l);
}
