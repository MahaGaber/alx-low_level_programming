#include"dog.h"
/**
 * print_dog - it fill memory with constant byte
 * @d: accept pointer of struct
 *Return:
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ?  d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ?  d->owner : "(nil)");
	}
}


