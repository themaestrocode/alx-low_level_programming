#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 *        followed by a new line, to the standard error.
 *
 * Return: 1 (Error)
 */
int main(void)
{
    const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg);

    /* use the write function to print to stderr */
    ssize_t ret = write(STDERR_FILENO, msg, len);
    if (ret != len)
        return (1);
    return (0);
}
