#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 0; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}

