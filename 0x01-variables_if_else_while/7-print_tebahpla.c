#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabets in reverse using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chars;

	for (chars = 'z'; chars >= 'a'; chars--)
		putchar(chars);
	putchar('\n');

	return (0);
}
