#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
int start = 0;
int end = 0;
while (s[end] != '\0')
{
end++;
}
end--;
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
