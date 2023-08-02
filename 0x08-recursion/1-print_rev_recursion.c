#include "main.h"
/**
 * _print_rev_recursion - PRINTS A STRING IN REVERSE.
 * @s: THE STRING TO BE PRINTED.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
