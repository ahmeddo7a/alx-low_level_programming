#include "main.h"

/**
 * rev_string - print the string in reverse
 * @s: The pointer to char
 *
 * Return: void prints the reversed string
 */

void rev_string(char *s)
{
	char reversed = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		reversed = s[i];
		s[i] = s[counter];
		s[counter] = reversed;
	}
}
