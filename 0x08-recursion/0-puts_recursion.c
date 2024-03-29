#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1); /* recursive call with the next character */
}

