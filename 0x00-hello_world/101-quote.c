#include <unistd.h>

/**
 * entry - main
 * prints an output to the console
 * return 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, sizeof(msg) - 1);
	return 1;
}
