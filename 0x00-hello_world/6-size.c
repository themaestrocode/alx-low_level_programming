#include <stdio.h>

/**
 * main - Entry point
 *
 *this function prints the size of various types on the computer it is compiled and run on
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of short int: %lu byte(s)\n", sizeof(short int));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of long double: %lu byte(s)\n", sizeof(long double));
	return (0);
}
