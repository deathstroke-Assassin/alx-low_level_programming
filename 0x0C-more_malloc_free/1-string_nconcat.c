#include<stdio.h>
#include<stdlib.h>

/**
 * _strlen - length of str
 * @str: string
 *
 * Description:function that calculate length of str
 * Return: 0 or length
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	if (!str)
		str = "";
	while (*str && str != NULL)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * *string_nconcat - checkt
 * @s1: integer to test
 * @s2: integer to test
 * @n: integer to test
 * Return: pt or 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, len1, len2;

/* If NULL is passed, treat it as an empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Get the lengths of the strings */
len1 = _strlen(s1);
len2 = _strlen(s2);

if (n >= len2)
n = len2;

/* Allocate memory for the new string */
s = malloc(sizeof(char) * (len1 + n + 1));
if (s == NULL)
return (NULL);

/* Copy s1 into the new string */
for (i = 0; i < len1; i++)
s[i] = s1[i];

/* Copy the first n bytes of s2 into the new string */
for (j = 0; j < n; j++)
s[i + j] = s2[j];

/* Add a null terminator at the end */
s[i + j] = '\0';

return (s);
}
