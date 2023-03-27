#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2 + 1;

	for (j = i; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}
