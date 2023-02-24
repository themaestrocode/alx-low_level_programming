#include "main.h"

/**
 * print_triangle - displays a triangleof # charcter
 * @size: specifies the sizeof the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size - row; col++)
		{
			putchar(' ');
		}

		for (col = 1; col <= row; col++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
