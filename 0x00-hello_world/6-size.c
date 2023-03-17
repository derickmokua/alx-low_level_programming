#include <stdio.h>
/**
 * main - a program that prints size of various computer types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu bytes(s)\n", sizeof(int));
printf("Size of long int: %lu bytes(s)\n", sizeof(long int));
printf("Size of long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of float: %lu bytes(s)\n", sizeof(float));
return (0);
}

