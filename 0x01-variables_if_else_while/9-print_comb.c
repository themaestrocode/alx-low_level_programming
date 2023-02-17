#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints 0 - 9 seperated by commas
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	puchar('\n');

	return (0);
}
