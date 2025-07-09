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
	int i;

	if (new_dog == NULL)
	{
		return;
	}


	if (a == NULL)
	{
		return (NULL);
	}

}
