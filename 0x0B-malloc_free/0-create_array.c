#include <stdlib.h>
#include "main.h"
/*
 * create_array - creates an array size and assigns char c
 * @size: size of ann array
 * @c: char to be assigned
 * Description: create array of zize and assigns char c
 * Return: pointer to an array, Nullif fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int l;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		str[l] = c;
	return (str);
}


