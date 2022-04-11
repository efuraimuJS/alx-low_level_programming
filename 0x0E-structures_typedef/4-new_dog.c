#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 *
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
  * *_strcpy - copy string.
  *
  * @src: string src
  * @dest: string dest
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (!name)
		name = "";
	if (!owner)
		owner = "";

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(_strlen(name) + 1);
	if (!ptr->name)
	{
		free(ptr->name);
		return (NULL);
	}

	ptr->name = _strcpy(ptr->name, name);

	ptr->age = age;

	ptr->owner = malloc(_strlen(owner) + 1);
	if (!ptr->owner)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);
}
