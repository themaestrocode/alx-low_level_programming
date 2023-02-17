#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the English alphabet, excluding q and e inlower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		if (chars == 'e' || chars == 'q')
			continue;
		putchar(chars);
	}
	putchar('\n');

	return (0);
}
