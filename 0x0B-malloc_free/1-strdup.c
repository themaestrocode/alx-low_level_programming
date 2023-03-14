#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string passed
 * Return: new_str (succes)
 */
char *_strdup(char *str)
{
	char *new_str;
	int len = strlen(str) + 1;
	int i = 0;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	while (i < len)
	{
		if (str[i] == '\0')
			return (new_str);

		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
