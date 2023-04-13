#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointerto allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);

	if (pntr == NULL)
		exit(98);

	return (pntr);
}
