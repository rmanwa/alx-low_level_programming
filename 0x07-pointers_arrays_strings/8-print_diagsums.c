#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int add, sum, x;

	add = 0;
	sum = 0;

	for (x = 0; x < size; x++)
	{
		add = add + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", add, sum);
}

