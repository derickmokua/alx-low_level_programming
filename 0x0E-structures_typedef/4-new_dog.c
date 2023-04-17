#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to new dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname, *newowner;
	int i, namelength = 0, ownerlength = 0;

	newdog = malloc(sizeof(dog_t)); /* allocate memory for new dog */
	if (newdog == NULL)
	return (NULL);

    /* find length of name and owner strings */
	while (name[namelength] != '\0')
	namelength++;
	while (owner[ownerlength] != '\0')
	ownerlength++;

    /* allocate memory for name and owner strings */
	newname = malloc((namelength + 1) * sizeof(char));
	if (newname == NULL)
	{
	free(newdog);
	return (NULL);
	}
	newowner = malloc((ownerlength + 1) * sizeof(char));
	if (newowner == NULL)
	{
	free(newdog);
	free(newname);
	return (NULL);
	}

    /* copy name and owner strings to new memory locations */
	for (i = 0; i <= namelength; i++)
	newname[i] = name[i];
	for (i = 0; i <= ownerlength; i++)
	newowner[i] = owner[i];

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
