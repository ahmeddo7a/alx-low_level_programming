#include "main.h"

/**
 * string_toupper - it will convert lowercase letters to uppercase
 * @x: this is ther pointer
 *
 * Return: Char , String to uppercase
 */

char *string_toupper(char *x)
{
	int i;

	i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
