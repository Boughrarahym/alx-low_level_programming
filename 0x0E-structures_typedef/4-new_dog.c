#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - prints the size of a string
 *@s: pointer that will store the string's location
 *Return: size of the string
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != 0)
	{
		n++;
		s++;
	}
	return (n);
}

/**
 **_strcpy - copies the string from a pointer to another
 * Boughrara
 *@src: pointer that has the string information
 *@dest: pointer to be copied
 *Return: string copied to dest
 */

char *_strcpy(char *dest, char *src)
{
	int h;

	for (h = 0; *src != 0; dest++, src++, h++)
	{
		*dest = *src;
	}
	for (*dest = 0; h > 0; dest--, src--, h--)
	{
	}
	return (dest);
}

/**
 *new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (n == NULL || o == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_name = malloc(sizeof(char) + _strlen(n) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) + _strlen(o) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, n);
	_strcpy(new_owner, o);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
