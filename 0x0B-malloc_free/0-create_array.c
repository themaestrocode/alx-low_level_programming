#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: the size of the array
 * @c: the array char initializer
 * Return: p (success)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));

	if  (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}
