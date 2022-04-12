#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct dog allocated memories
 * @d: pointer to struct dog variable to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
