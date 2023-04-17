#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif

#ifndef DOG_T_H
#define DOG_T_H

typedef struct dog dog_t

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif


