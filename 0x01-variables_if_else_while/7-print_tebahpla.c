#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
