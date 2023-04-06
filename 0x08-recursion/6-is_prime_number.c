#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - tells whether a number is prime or not
 * @n: number to be evaluated
 * Return: 1 when prime 0 when not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculates whether a number is prime via recursion
 * @n: number to be evaluated
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
