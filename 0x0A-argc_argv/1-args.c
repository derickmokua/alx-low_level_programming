#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
