#include "main.h"
/**
 * isupper - checks for uppercase
 * @c: The character t
 *
 * Return: On success 1.
 * On error, 0 is returned
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
