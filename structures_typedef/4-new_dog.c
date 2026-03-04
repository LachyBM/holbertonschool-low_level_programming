#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * copy- int the copy
 * @dest: dog copy dest
 * @src: dog copy loc
 * Return: copy
 */

char *copy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * new_dog- int the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	name_copy = malloc((_strlen(name) + 1) * sizeof(char));
	owner_copy = malloc((_strlen(owner) + 1) * sizeof(char));

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(d);
		return (NULL);
	}

	copy(name_copy, name);
	copy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
