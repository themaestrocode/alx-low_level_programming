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
	char c, *s;
	int i, it = 0;
	float f;

	va_start(ap, format);

	while (format != NULL && (format[it] != '\0'))
	{
		switch (format[it])
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
		if (format[it + 1] != '\0' && (format[it] == 'c' ||
					format[it] == 'i' || format[it] == 'f' || format[it] == 's'))
			printf(", ");
		it++;
	}
	printf("\n");
	va_end(ap);
}
