#include "main.h"

/**
 * largest_number - prints the largest of three ints
 * @a: the first value
 * @b: the second value
 * @c: the third value
 * Return: largest (success)
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;

	else if (b >= a && b >= c)
		largest = b;

	else
		largest = c;

	return (largest);
}
