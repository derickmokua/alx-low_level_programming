#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0, len = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	len++;
	}
	len++;
	}
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	str[k++] = av[i][j];
	}
	str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
