#include <stdlib.h>
#include "dog.h"
/**
 * free dog - frees the dogs
 * @d: pointer to dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
