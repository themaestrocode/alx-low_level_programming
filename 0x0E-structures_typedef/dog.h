#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
