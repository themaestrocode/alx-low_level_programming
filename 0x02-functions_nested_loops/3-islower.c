#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * @c: recieve input from stdin
 *
 * Return: (1) (success), (0) (failure)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
