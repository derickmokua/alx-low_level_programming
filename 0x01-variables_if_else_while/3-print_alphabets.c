#include <stdio.h>

/**
 * main - alphabets in loercase,uppercase then new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/* Print uppercase alphabet */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	/* Print new line */
	putchar('\n');

	return (0);
}

