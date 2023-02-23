#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks whther an input is a digit
 * @c: the variable to be tested
 * Return: 1 (succes), 0 (failure)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
