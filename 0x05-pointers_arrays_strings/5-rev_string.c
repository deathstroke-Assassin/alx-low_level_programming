#include "main.h"
#include <stdio.h>
/**
 * rev_string - check the code
 * @s: the character
 * Return: Always 0.
 */
void rev_string(char *s)
{
int r, len;
char *start, *end = s;
for (r = 0; s[r] != '\0' && s[r + 1] != '\0'; r++)
{
end++;
}
len = r + 1;
start = s;
for (r = 0; r < len / 2; r++)
{
char rev;
rev = *end;
*end = *start;
*start = rev;
start++;
end--;
}
end[len + 1] = '\0';
}
