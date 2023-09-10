#include "hash_tables.h"

/**
 * key_index - Returnsindex at which the key should be
 * stored in an arry of hash tables
 * @key: the key
 * @size: size of array
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key) % size;

	return (hash_index);
}
