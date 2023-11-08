#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with copied name and owner
 * @name: Pointer to a string (dog's name)
 * @age: Age of the dog
 * @owner: Pointer to a string (dog's owner)
 *
 * Return: Pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || owner == NULL)
        return (NULL);

    dog_t *new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL)
        return (NULL);

    int name_length = 0;
    while (name[name_length] != '\0')
        name_length++;

    int owner_length = 0;
    while (owner[owner_length] != '\0')
        owner_length++;

    new_dog->name = malloc(name_length + 1);
    new_dog->owner = malloc(owner_length + 1);

    if (new_dog->name == NULL || new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return (NULL);
    }

    for (int i = 0; i <= name_length; i++)
        new_dog->name[i] = name[i];

    new_dog->age = age;

    for (int i = 0; i <= owner_length; i++)
        new_dog->owner[i] = owner[i];

    return (new_dog);
}
