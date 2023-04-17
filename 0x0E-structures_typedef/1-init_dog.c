#include"dog.h"
/**
 * init_dog - it fill memory with constant byte
 * @d: accept pointer of struct
 * @name: pointer character
 * @age: number
 * @owner: pointer character
 *Return:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d.age = age;
	d->owner = owner;
}

