#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: the difference between the ASCII values of the first non-matching
 *         character in s1 and s2, or 0 if the two strings are equal
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
