#include <stdio.h>

/**
 * main - prints all the arguments received
 * @argc: argumenmt count
 * @argv: the arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
