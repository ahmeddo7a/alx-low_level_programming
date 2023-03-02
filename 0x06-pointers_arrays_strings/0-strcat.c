#include "main.h"
#include <stdio.h>

/**
 * _strcat - writes the character c to stdout
 * @dest: The String where the src will be added
 * @src: the String where it will be added to dest
 *
 * Return: Char String after it concatenates.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);

}
