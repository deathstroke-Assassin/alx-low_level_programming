#include "main.h"
/**
 * string_toupper - reverse an arrray.
 * @str: lowercased string
 * Return: 0
 */
char *string_toupper(char *str)
{
int ch = 0;
while (*(str + ch) != '\0')
{
if (*(str + ch) >= 'a' && *(str + ch) >= 'z')
{
*(str + ch) = *(str + ch) - 32;
}
}
return (str);
}
