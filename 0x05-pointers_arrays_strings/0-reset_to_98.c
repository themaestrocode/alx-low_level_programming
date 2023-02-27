#include "main.h"

/**
 * reset_to_98 - changes the value of the variable n to 98
 * @n: the variable
 */
void reset_to_98(int n)
{
	int *p;

	p = &n;
	*p = n;
}
