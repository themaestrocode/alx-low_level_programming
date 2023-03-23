#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints number arguments passed to it
 * @separator: the separator string or character
 * @n: the number of arguments, excluding the seperator
 * @...: the actual arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", separator);

		printf("%d", va_arg(ap, int));
	}

	va_end(ap);

	printf("\n");
}
