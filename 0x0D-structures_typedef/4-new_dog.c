#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, name_len = 0, owner_len = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		name_len++;

	for (i = 0; owner[i]; i++)
		owner_len++;

	newDog->name = malloc(sizeof(char) * (name_len + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
