#include <stdio.h>
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
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return(NULL);
	}
	doggo = malloc(sizeof(dog_t))
	if (doggo == NULL)
	{
		return (NULL);
	}
	(*doggo).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*doggo).name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	(*doggo).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*doggo).owner == NULL)
	{
		free((*doggo).name);
		free(doggo);
		return (NULL);
	}
	(*doggo).name = _strcopy((*doggo).name, name);
	(*doggo).age = age;
	(*doggo).owner = _strcopy((*doggo).owner, owner);
	return (doggo);
}
