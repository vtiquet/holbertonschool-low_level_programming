#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable.
 * @d: the pointer to be initialize.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
