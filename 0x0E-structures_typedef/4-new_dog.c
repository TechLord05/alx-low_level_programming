#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_length, owner_length;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (name_length = 0; name[name_length]; name_length++)
		;
	new_name = malloc(name_length + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (name_length = 0; name[name_length]; name_length++)
		new_name[name_length] = name[name_length];
	new_name[name_length] = '\0';

	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	new_owner = malloc(owner_length + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (owner_length = 0; owner[owner_length]; owner_length++)
		new_owner[owner_length] = owner[owner_length];
	new_owner[owner_length] = '\0';

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
