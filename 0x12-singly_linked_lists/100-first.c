#include <stdio.h>

void exec_before_main(void) __attribute__((constructor));

/**
 * exec_before_main - prints some sentences before the main function call
 */
void exec_before_main(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
