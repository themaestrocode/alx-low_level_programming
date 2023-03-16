#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - entry point
* @s1: input
* @s2: input
* @n: input
* Description: function
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i, j;
	char *newMem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = s2len = 0;

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		n = s2len;
	newMem = malloc(s1len + n + 1);

	if (newMem == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		newMem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		newMem[i] = s2[j];
		i++;
		j++;
	}
	newMem[i] = '\0';
	return (newMem);
}
