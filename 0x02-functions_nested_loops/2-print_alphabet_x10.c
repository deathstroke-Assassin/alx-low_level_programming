#include "main.h"
/**
 * print_alphabet_x10 -   prints the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
  char c = 'a';
  char n = 48;
  while (n <= 57)
    {
      while (c <= 'z')
	{
	  _putchar(c);
	  c++;
	  n++;
	}
      _putchar('\n');
    }
}
