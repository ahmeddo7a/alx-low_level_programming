#include "main.h"

/**
 * _strlen - get the length of string
 * @s: pointer to the char string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int strlength;

	strlength = 0;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}
	return (strlength);
}
