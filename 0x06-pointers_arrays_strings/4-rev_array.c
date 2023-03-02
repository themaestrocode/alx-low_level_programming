#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of type int
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
