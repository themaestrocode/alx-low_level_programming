#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fib1 = 1, fib2 = 2, nextfib;

	printf("%ld, %ld", fib1, fib2);
	for (i = 3; i <= 50; i++)
	{
		nextfib = fib1 + fib2;
		printf(", %ld", nextfib);
		fib1 = fib2;
		fib2 = nextfib;
	}
	printf("\n");
	return (0);
}
