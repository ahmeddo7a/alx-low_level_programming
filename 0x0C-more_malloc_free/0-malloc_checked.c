#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - Check if malloc fails
 * @b: integer value
 *
 * Return: returns pointer if success and 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
