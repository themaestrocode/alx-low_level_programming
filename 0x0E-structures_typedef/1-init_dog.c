#include "dog.h"

/**
 * init_dog - initializes a dog struct
 * @d: pointer to the dog struct
 * @name: pointer to the dog's name
 * @age: pointer to the dog's age
 * @owner: pointer to the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
