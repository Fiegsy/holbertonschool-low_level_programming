#include "dog.h"

/**
 * init_dog - initialize a variable of type dog
 * @d: a pointer to the structure
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the owner of the dog
 *
 * Return: void
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
