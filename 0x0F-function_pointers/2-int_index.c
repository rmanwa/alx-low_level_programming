#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]))
			return (q);
	}
	return (-1);
}

