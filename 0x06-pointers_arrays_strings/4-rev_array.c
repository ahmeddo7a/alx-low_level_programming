#include "main.h"

/**
 * reverse_array - it will reverse the array elements
 * @a: is the array
 * @n: number of elements of array a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		/**
		* a[i] = the first array element
		*/
		a[i] = a[n];
		/**
		* we will assign a[n] (which is the las element of our array)
		* to a[i] (which is the first element inside the array)
		*/
		a[n] = j;
		/**
		* we will assign j (which is the first element of the array)
		* to a[n] ( this is the last element of the array)
		*/
	}
}
