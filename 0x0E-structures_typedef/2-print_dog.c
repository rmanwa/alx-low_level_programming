#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - Prints the details of a given dog.
* @d: Pointer to the dog to be printed.
*
* This function takes a pointer to a `struct dog` as its parameter and prints
* out the dog's name, age, and owner. If the `name` or `owner` fields of the
* `struct dog` are `NULL`, the function replaces them with the string `"(nil)"`
* before printing them out. If the parameter `d` is `NULL`, this function does
* nothing.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
