#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes eache letter of every word
 * @str: string yo be capitalized
 * Return: str
 */
char *cap_string(char *str)
{
	int i, capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

		capitalize_next = 0;

		switch (str[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
			capitalize_next = 1;
			break;

		default:
			break;
		}
	}

	return (str);
}
