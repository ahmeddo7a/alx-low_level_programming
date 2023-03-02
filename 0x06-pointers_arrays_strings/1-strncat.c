#include "main.h"
#include <stdio.h>

/**
 * _strncpy - writes the character c to stdout
 * @dest: The String where the src will be added
 * @src: the String where it will be added to dest
 * @n: the number of bytes
 * Return: Char String after it concatenates.
 */

char *_strncat(char *dest, char *src, int n)
{
        int i;
	int j;

        i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
