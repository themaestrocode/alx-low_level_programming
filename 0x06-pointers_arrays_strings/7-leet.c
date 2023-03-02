#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: the input string to be encoded
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i = 0, j;
	char rep[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
				s[i] = rep[j];
		}
		i++;
	}

	return (s);
}
