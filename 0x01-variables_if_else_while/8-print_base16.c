#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints somethong out...
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 0; i < 6; i++)
		putchar(i + 'a');
	putchar('\n');

	return (0);
}
