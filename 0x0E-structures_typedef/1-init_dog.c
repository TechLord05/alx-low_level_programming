#include <stdio.h>
#include "dog.h"

/**
 * struct dog - Structure that contains a float and char member
 * @name: first member
 * @age: second member
 * @owner: Third member
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
