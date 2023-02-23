#include "main.h"

/**
 * print_diagonal - prints the \ character n times
 * @n: number oftimes the \ charcater is to be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int x;

			if (i > 0)
			{
				for (j = 0; j < i; j++)
					_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}

		_putchar('\n');
	}
	else
		_putchar('\n');
}
