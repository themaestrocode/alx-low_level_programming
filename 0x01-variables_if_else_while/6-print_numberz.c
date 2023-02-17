#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10, using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
