#include "main.h"

/**
 * factorial - RETURNS THE FACTORIAL OF A NUMBER.
 * @n: NUMBER TO RETURN THE FACTORIAL IT COMES FROM.
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
