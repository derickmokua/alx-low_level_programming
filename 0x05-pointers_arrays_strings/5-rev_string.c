#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;

	while (s[j + 1])
		j++;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

