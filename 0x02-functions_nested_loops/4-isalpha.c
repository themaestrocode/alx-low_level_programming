#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if an input is a charcter or not
 *
 * @c: the character to check
 *
 * Return: (1) (success), (0) (failure)
 *
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
