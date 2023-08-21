#include "main.h"

/**
 * _memset- fils a memory block with specific value
 * @b: the desired value
 * @n: no of bytes to be changed
 * @s: starting address of the memory to be filled
 *
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

