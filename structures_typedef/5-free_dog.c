#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 *
 * @d: pointer to dog_t to free
 *
 * Return: success
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
