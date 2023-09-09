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
int n;
char chr = 'a';
for (n = 48; n <= 58; n++)
{
putchar (n);
}
for (chr = 'a'; chr <= 'f'; chr++)
{
putchar (chr);
}
putchar ('\n');
return (0);
}

