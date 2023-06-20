#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - measures the length of a string
 * @s: pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strcpy - copies a string
 * @dest: a pointer
 * @src: a pointer
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
