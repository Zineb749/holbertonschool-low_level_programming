#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Represents a dog's information.
 * @name: The name of the dog (a pointer to a string).
 * @age: The age of the dog (as a float).
 * @owner: The name of the dog's owner (a pointer to a string).
 *
 * This structure holds basic information about a dog, such as its name,
 * age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
