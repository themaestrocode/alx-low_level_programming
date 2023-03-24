#ifndef MINE_H
#define MINE_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_all(const char *const format, ...);

/**
 * sum_them_all - sums all the arguments passed to the function
 * @n: the number of arguments provided
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
        int i;
        int sum = 0;

        if (n == 0)
                return (0);

        va_list ap;

        va_start(ap, n);

        for (i = 0; i < n; i++)
                sum += va_arg(ap, int);

        va_end(ap);

        return (sum);
}

void print_all(const char *const format, ...)
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
#endif /* MINE_H */

