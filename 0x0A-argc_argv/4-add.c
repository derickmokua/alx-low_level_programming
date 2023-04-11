#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 *
 * Return: 0 if the program completes successfully, 1 if an error occurs
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
	for (int j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

