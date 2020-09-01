#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
