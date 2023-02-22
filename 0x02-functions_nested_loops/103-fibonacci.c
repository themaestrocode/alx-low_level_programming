#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
	long int fiba, fibb, x, y;

	fiba = 1;
	fibb = 2;
	x = 0;
	y = 0;

	while (x <= 4000000)
	{
		x = fiba + fibb;
		fiba = fibb;
		fibb = x;
		if ((fiba % 2) == 0)
		{
			y += fiba;
		}
	}

	printf("%ld\n", y);
	return (0);
}
