#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;
	
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	
	ht->shead = NULL;
	ht->stail = NULL;
	
	return (ht);
}

/**
 * shash_table_set - Inserts a key/value pair into the sorted hash table
 * @ht: The sorted hash table to insert into
 * @key: The key
 * @value: The value
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *tmp;
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	
	index = hash_djb2((const unsigned char *)key) % ht->size;
	
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->array[index] = new_node;
	
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_node->snext = tmp->snext;
		new_node->sprev = tmp;
		if (tmp->snext != NULL)
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}
	if (new_node->snext == NULL)
		ht->stail = new_node;
	
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *tmp;

    if (ht == NULL || key == NULL)
        return (NULL);

    index = hash_djb2((const unsigned char *)key) % ht->size;
    tmp = ht->array[index];

    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
            return (tmp->value);
        tmp = tmp->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *tmp;
    int comma = 0;

    if (ht == NULL)
        return;

    printf("{");
    tmp = ht->shead;
    while (tmp != NULL)
    {
        if (comma == 1)
            printf(", ");
        printf("'%s': '%s'", tmp->key, tmp->value);
        comma = 1;
        tmp = tmp->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *tmp;
    int comma = 0;

    if (ht == NULL)
        return;

    printf("{");
    tmp = ht->stail;
    while (tmp != NULL)
    {
        if (comma == 1)
            printf(", ");
        printf("'%s': '%s'", tmp->key, tmp->value);
        comma = 1;
        tmp = tmp->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table and frees memory
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *temp;
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; ++i)
    {
        node = ht->array[i];
        while (node)
        {
            temp = node;
            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    
    free(ht->array);
    free(ht);
}
