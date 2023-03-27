#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 *
 * @s: Pointer to the string
 */
void print_rev(char *s)
{
	int len = 0;
	char *t = s;

	/* Find the length of the string */
	while (*t != '\0')
	{
		len++;
		t++;
	}

	/* Print the string in reverse */
	while (len > 0)
	{
		putchar(*(s + len - 1));
		len--;
	}

	putchar('\n');
}

