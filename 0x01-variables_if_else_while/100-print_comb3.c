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
int x = 48;
int y = 48;
for (x = 48; x <= 57; x++; y = 48; y <= 57; y++)
{
  if (x != y)
    {
	putchar (x);
	putchar (y);
	if (x < 57; y < 57)
	  {
		putchar(44);
		putchar(32);
	  }
    }  
putchar ('\n');
return (0);
}
