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
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	while ((new_str[i] = str[i]) != '\0')
		i++;

	return (new_str);
}
