#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * dog_t *new_dog - creates a new dog
  * @name: first member
  * @age: second member
  * @owner: third member
  * Return: dog_t
  * Description: creates a new dog
  **/

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_length = strlen(name);
	size_t owner_length = strlen(owner);
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	/*  Allocate memory for the name and owner strings */
	new_dog->name = (char *)malloc((name_length + 1) * sizeof(char));
	new_dog->owner = (char *)malloc((owner_length + 1) * sizeof(char));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	/*  Assign the age of the dog */
	new_dog->age = age;

	return (new_dog);
}
