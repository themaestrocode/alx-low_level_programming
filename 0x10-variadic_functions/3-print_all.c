#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints arguments of different data types
 * @format: the data type specifier
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *specifier;
	char c, *s;
	int i;
	float f;

	va_start(ap, format);
	specifier = format;

	while (format != NULL && (*specifier != '\0'))
	{
		switch (*specifier)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		specifier++;
		if (*specifier != '\0' && (*specifier == 'c' ||
					*specifier == 'i' || *specifier == 'f' || *specifier == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
