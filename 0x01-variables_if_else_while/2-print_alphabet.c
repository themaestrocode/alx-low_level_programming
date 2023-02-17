#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabets in English
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
		putchar(chars);
	putchar('\n');

	return (0);
}
