#include <stddef.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary sequence
 * Return: res (success( or 0 (failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res <<= 1;

			if (b[i] == '1')
				res |= 1;
			i++;
		}
		else
		{
			/* incase we encounter a char diff from 0 and 1 */
			return (0);
		}
	}
	return (res);
}
