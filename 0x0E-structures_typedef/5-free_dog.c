#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a struct dog.
* @d: Pointer to the struct dog to free memory for.
*
* This function frees the memory allocated for a struct dog. The function takes a
* pointer to the struct as its parameter and checks if it's not NULL before freeing
* the memory.
*
* The function first frees the memory allocated for the name of the dog, then for the
* owner, and finally for the whole struct. This ensures that all the memory allocated
* for the struct is properly freed and avoids any memory leaks.
*
* The function does not return anything, as it only modifies memory allocated on the heap.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

