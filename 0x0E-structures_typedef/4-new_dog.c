#include"dog.h"
/**
 * _strlen - it get length of string
 * @s: accept pointer character
 *
 *Return:length of string
 */

int _strlen(const char *s)
{
int counter;

for (counter = 0; *s != '\0'; s++)
	counter++;
return (counter);
}

/**
 * _strcpy - it return dest with a copy of src string
 * @dest: accept pointer character
 * @src:accept pointer character
 *Return:pointer character
 */

char *_strcpy(char *dest, char *src)
{
int  i;


for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];

dest[i] = '\0';

return (dest);
}

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

	d->name = malloc(sizeof(char) *  (_strlen(name) + 1));
	if (d->name == NULL)
	{
		return (NULL);
	}

	d->owner = malloc(sizeof(char) *  (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
return (d);
}


