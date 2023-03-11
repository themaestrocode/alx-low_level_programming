#include <stdio.h>

/**
 * main - prints the first argument supplied to the command
 * line, which in thuis case is the name of the program executable
 * @argc: int count of all the arguemnts
 * @argv: an array of the arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
