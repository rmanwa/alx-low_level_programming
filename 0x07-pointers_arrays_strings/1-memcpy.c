#include "main.h"
/**
 * _memcpy - function which copies mem area
 * @dest: memory where it isstored
 * @src: memory where it is copied
 * @n: number of bytes
 * Return: memory copied with number (n) of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int p = n;

	for (; m < p; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
