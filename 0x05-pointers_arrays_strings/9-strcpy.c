#include "main.h"

/**
 * _strcpy - copy Strings
 * @dest: destination to be coppied
 * @src: source which wil be coppied
 *
 * Return: char* A String will be returned
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (*(src+len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
