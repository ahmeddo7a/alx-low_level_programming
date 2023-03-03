#include "main.h"

/**
 * cap_string - Capitalize First letter after any of the pattern
 * @c: String array
 *
 * Return: Char , String after capitalize
 */

char *cap_string(char *c)
{
	int i;

	i = 0;

	while (c[i])
	{
		while (!(c[i] >= 97 && c[i] <= 122))
		{
			i++;
		}
		if (c[i - 1] == ' ' ||
				c[i - 1] == '\t' ||
				c[i - 1] == '\n' ||
				c[i - 1] == ',' ||
				c[i - 1] == ';' ||
				c[i - 1] == '.' ||
				c[i - 1] == '!' ||
				c[i - 1] == '?' ||
				c[i - 1] == '"' ||
				c[i - 1] == '(' ||
				c[i - 1] == ')' ||
				c[i - 1] == '{' ||
				c[i - 1] == '}' ||
				i == 0)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
