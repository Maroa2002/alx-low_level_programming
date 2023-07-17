#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes a variable of type struct dog
  * @d: input dog
  * @name: input name
  * @age: input age
  * @owner: input owner
  *
  * Return: void
  **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
