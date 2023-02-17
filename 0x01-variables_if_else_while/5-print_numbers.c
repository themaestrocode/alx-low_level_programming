#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the single base 10 digits from 0 - 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	do {
		printf("%d", num);
		num++;
	} while (num < 10);

	printf("\n");

	return (0);
}
