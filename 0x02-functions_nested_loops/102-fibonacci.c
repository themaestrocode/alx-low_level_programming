#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
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
