#include <stdio.h>
#include "dog.h"
/*
 * File: 0-isupper.c
 *
 */


/**
 * init_dog - Checks if a character is uppercasee.
 * @d: The character to be checked.
 * @name: The charcter to be checked.
 * @age : age.
 * @owner: owner.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	if (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
