#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog structure.
 *
 * @d: pointer;
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->owner)
			free(d->owner);
		if (d->name)
			free(d->name);

		free(d);
	}
}
