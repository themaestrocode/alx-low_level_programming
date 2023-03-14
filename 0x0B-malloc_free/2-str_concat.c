#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - does something
 * @s1: the first string
 * @s2: the second string
 * Return: s3 (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
                s2 = "";

	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (s3 == NULL)
		return (NULL);

	while ((s3[i] = s1[i]) != '\0')
		i++;

	while ((s3[j] = s2[j]) != '\0')
		j++;

	s3[j] = '\0';

	return (s3);
}
