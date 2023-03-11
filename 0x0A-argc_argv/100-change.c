#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: input
* @argv: input
* Return: 0
*/
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins = 0, amount, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += amount / coins[i];
		amount = amount % coins[i];
	}

	printf("%d\n", num_coins);

	return (0);
}
