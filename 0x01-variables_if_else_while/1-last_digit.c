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
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n);
if (n > 5)
printf("and is greater than 5\n");
else if (n == 5)
printf("and is 0\n");
else if (n < 6 && n > 0)
printf("and is less than 6 and not 0\n");
return (0);
}

