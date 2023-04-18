#include"dog.h"
/**
 * free_dog - it fill memory with constant byte
 * @d: accept pointer of struct
 *Return:
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}


