#include <stdio.h>

/**
 * main- entry point
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i, fib1 = 1, fib2 = 2, nextfib;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		nextfib = fib1 + fib2;
		printf(", %d", nextfib);
		fib1 = fib2;
		fib2 = nextfib;
	}
	printf("\n");

	return (0);
}
