#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the English alphabets in uper and lower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chars, CHARS;

	for (chars = 'a'; chars <= 'z'; chars++)
		putchar(chars);
	for (CHARS = 'A'; CHARS <= 'Z'; CHARS++)
		putchar(CHARS);
	putchar('\n');

	return (0);
}
