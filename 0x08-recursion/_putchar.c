#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the CHARACTER c to stand out
  * @c: The CHARACTER to print
 *
 * Return:1. On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
