#include "main.h"

/**
 * print_binary - prints the binary rep of an integer
 * @n: the integer to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int crnt;
	int i, bit_count = 0;

	for (i = 63; i >= 0; i--)
	{
		crnt = n >> 1;

		if (crnt & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
		{
			_putchar('0');
		}
	}
	if (!bit_count)
		_putchar('0');
}
