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


	for(i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(c[i] == s1[j])
			{
				c[i] = s2[j];
			}
		}
	
	}
	return (c);
}
