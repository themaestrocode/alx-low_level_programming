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
	char *new_str = NULL;
	unsigned int len = strlen(str) + 1;
	unsigned int  i = 0;

	if (str == NULL)
		return (NULL);

	new_str = (char *) malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
