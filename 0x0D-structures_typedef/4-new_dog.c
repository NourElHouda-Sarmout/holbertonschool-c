#trcopy(char *dest, char *src);



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, name_len = 0, owner_len = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return NULL;

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

	newDog->name = _strcopy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _strcopy(newDog->owner, owner);

	return (newDog);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
