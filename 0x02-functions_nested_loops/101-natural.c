#include <stdio.h>

/**
 * main - Natural
 * Description: Natural
 *
 * Return: 0 Success 
 * error, 1 Error
 */

int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
