#include "main.h"
/**
 * rot13 - encryption using rot 13
 * @c: it the string to encode
 *
 * Return: the value of c
 */

char *rot13(char *c)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;
	int j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
				break;
			}
		}
	}
	return (c);
}
