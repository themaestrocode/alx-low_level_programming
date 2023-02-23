#include "main.h"

/**
 * more_numbers - prints 10X 0 - 14
 */
void more_numbers(void)
{
	int i = 0, j;

	do {
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}

		_putchar('\n');

		i++;
	} while (i < 10);
}
