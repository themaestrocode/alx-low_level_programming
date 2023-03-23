#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints number arguments passed to it
 * @seperator: the seperator character
 * @n: the number of arguments, excluding the seperator
 * @...: the actual arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (seperator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("

	va_end(ap);
}
