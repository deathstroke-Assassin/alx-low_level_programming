#include "main.h"
/**
 * leet - capitalizes most of the words in a string.
 * @str: analized string.
 *
 * Return: String with all words capitalized.
 */
char *leet(char *str)
{
	int f;
	int ch = 0;
	char a[] = "aeotlAEOTL";
	char t[] = "4307143071";

	while (*(str + ch) != '\0')
	{
		for (f = 0; f <= 9; f++)
		{
		if (*(str + ch) == a[f])
			{
			*(str + ch) = t[f];
			}
		}
		ch++;
	}
return (str);
}
