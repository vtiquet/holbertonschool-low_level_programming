#include <stdlib.h>
#include "dog.h"
/**
* _strlen - a function that returns the length of a string.
* @s: The string to get the legth of.
* Return: the length of the string.
*/
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
	n++;
	s++;
	}
	return (n);
}
/**
* _strcpy - function that copies the string to the buffer.
* @dest: the buffer.
* @src: the string.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int  i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 * Return: NULL if the function fails or the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *name_copy;
	char *owner_copy;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		return (NULL);
	}
	_strcpy(name_copy, name);
	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(doggo);
		return (NULL);
	}
	_strcpy(owner_copy, owner);
	doggo->name = name_copy;
	doggo->age = age;
	doggo->owner = owner_copy;
	return (doggo);
}
