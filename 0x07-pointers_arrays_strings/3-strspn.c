#include "main.h"

/**
 * _strspn - returns the length of the longest prefix substring of s
 * that consists only of bytes from accept
 * @s: the string to search
 * @accept: the set of characters to search for
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}

	return (i);
}
