#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
char chr = 'a';
while (chr <= 'z')
{
if (chr != 'e' && chr != 'q')
{
putchar (chr);
}
chr++;
}
putchar ('\n');
return (0);
}

