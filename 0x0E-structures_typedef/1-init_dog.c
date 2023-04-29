#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: the name of the dog to set
 * @age: the age of the dog to set
 * @owner: the owner of the dog to set
 *
 * Description: This function takes a pointer to a struct dog as its first
 *              parameter and initializes its members with the specified
 *              name, age, and owner values. If the pointer is null, it
 *              allocates memory for the struct dog before initializing it.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
