#include <ctype.h>
#include "main.h"

/**
 * _isupper - tests whether an input char is upper case or not
 * @c: value to be tested
 * Return: 1 (success), 0 (failure)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
