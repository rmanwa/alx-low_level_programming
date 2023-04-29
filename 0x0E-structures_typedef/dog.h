#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents basic information about a dog
 * @name: a pointer to the dog's name
 * @age: the dog's age, represented as a float
 * @owner: a pointer to the name of the dog's owner
 *
 * Description: This struct contains basic information about a dog,
 *              including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
