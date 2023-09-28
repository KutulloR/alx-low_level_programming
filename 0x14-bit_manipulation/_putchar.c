#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
    /* Use the 'write' system call to write 'c' to standard output (file descriptor 1). */
    return write(1, &c, 1);
}
