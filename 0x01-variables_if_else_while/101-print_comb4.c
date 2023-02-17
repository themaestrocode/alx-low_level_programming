#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints combination of 3 digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (i == j || i == k || j == k || j < i || k < j)
					continue;

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i == 7 && j == 8 && k == 9)
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
