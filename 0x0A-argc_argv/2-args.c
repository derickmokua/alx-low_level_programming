#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
	/* Print each argument followed by a newline */
	printf("%s\n", argv[i]);
	}

	return (0);
}
