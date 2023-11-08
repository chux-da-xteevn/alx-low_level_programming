#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a struct dog
 * @d: Pointer to a struct dog
 * @name: Pointer to a string (dog's name)
 * @age: Age of the dog
 * @owner: Pointer to a string (dog's owner)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) {
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
