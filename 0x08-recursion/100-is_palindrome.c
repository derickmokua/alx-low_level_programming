#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *p = s;
	int i;

    /* Get length of the string */
	while (*p != '\0')
	{
	len++;
	p++;
	}

    /* Compare characters from start and end of string */
	for (i = 0; i < len / 2; i++)
	{
	if (s[i] != s[len - i - 1])
		{
	return (0);
		}
	}

	return (1);
}

