#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the sqroot of a number
 * @n: number which square root is being calculated for
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find sqrt
 * @n: number which sqrt is being calc for
 * @i: the iterator
 * Return: Square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i = 1));
}

