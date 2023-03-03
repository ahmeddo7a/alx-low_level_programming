#include "main.h"
/**
 * leet - converts some letters to numbers
 * @c: it the string to encode
 *
 * Return: the value of c
 */

char *leet(char *c)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	int i;
	int j;

	i = 0;

	while (c[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if(c[i] == s1[j])
			{
				c[i] = s2[j];
			}
		}
		i++;
	}
	return (c);
}
