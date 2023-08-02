#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - RETURNS THE NATURAL SQUARE ROOT OF A NUMBER.
 * @n: NUMBER TO CALCULATE THE SQUARE ROOT OF.
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - RECURSES TO FIND THE NATURAL.
 * SQUARE ROOT OF A NUMBER.
 * @n: NUMBER TO CALCULATE THE square ROOT OF
 * @i: ITERATOR
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
