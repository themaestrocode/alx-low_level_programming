#include <stdio.h>

/**
 * print_binary - prints the binary rep of an integer
 * @n: the integer to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int bit_count;

	mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
	bit_count = sizeof(unsigned long int) * 8;

	while (bit_count > 0)
	{
		if ((n & mask) != 0)
			printf("1");
		else
			printf("0");

		mask >>= 1;
		bit_count--;
	}
	printf("\n");
}
