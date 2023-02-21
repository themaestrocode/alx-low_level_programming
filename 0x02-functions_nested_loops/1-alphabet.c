#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the aplhabets in lower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
		_putchar(chars);

	_putchar('\n');

	return (0);
}
