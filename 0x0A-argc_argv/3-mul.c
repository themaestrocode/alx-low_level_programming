#include <stdio.h>

/**
 * main - Entry point
 * @argc: argumemnt count
 * @argv: argument string array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);

	return (0);
}
