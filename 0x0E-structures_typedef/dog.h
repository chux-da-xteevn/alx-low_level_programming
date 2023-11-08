#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Define a new name dog_t for the type struct dog */
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
