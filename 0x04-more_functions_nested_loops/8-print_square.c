#include "main.h"

/**
 * print_square - prints the character # as a square
 * @size: the size of the sqaure to be printed
 */
void print_square(int size)
{
	int breadth, length = 0;

	if (size > 0)
	{
		do {
			for (breadth = 0; breadth < size; breadth++)
			{
				_putchar('#');
			}
			_putchar('\n');

			length++;
		} while (length < breadth);
	}
	else
		_putchar('\n');
}
