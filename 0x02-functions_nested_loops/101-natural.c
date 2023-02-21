#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	_putchar(sum + '0');

	return (0);
}
