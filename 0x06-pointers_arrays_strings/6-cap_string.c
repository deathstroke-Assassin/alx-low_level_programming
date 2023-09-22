#include "main.h"
/**
 * cap_string - reverse an arrray.
 * @str: lowercased string
 * Return: 0
 */
char *cap_string(char *str);
{
	int f;
	int ch = 0;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(str + ch) != '\0')
	{
		if (*(str + ch) >= 'a' && *(str + ch) <= 'z')
		{
			if (ch == 0)
			{
				*(str + ch) = *(str + ch) - 32;
			}
			else
			{
				for (f = 0 ; f <= 12; f++)
				{
					if (a[f] == *(str + ch - 1))
					{
					*(str + ch) = *(str + ch) - 32;
					}
				}
			}
		}
	ch++;
	}
return (str);
}
