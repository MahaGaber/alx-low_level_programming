#include"dog.h"
#include <string.h>

/**
 * new_dog - it copy values
 * @name: pointer character
 * @age: number
 * @owner: pointer character
 *Return:pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) *  (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);

	d->owner = malloc(sizeof(char) *  (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = strcpy(d->owner, owner);

	d->age = age;

	return (d);
}


