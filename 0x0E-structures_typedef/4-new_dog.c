#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - checks the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */

int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * *_strcpy - copies the string pointed at by src
 * @dest: points to buffer where we copy the string
 * @src: string to be copied
 * Return: the copied pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, m;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (m = 0; m < len; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog in years
 * @owner: the person who owns the new dog
 * Return: pointer to new dog if it evaluates and NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
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
