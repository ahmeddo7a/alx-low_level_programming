#include "main.h"
/**
 * _isdigit - check if it is a digit
 * @c: The digit to check
 *
 * Return: On success 1.
 * On error,0 is returned
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
