#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string 
 * @n: number of bytes
 *
 * Return: succes return the conc string If fails return Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1 && s[len1])
		len1++;
	while (s2 && s2[len])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 +len2 +1));
	if(!s)
		return (NULL);

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
