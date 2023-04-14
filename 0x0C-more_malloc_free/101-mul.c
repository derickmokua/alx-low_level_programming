#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
*main - Entry point
*
*@argc: The number of arguments passed to the program
*
*@argv: An array of pointers to the arguments
*
*Return: 0 on success, 98 on error
*/

int main(int argc, char *argv[])
{
	// Check if the number of arguments is correct
	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}
// Check if the numbers are composed of digits
	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; i < strlen(num1); i++)
	{
	if (num1[i] < '0' || num1[i] > '9')
	{
	printf("Error\n");
	return 98;
	}
	}

	for (int i = 0; i < strlen(num2); i++)
	{
	if (num2[i] < '0' || num2[i] > '9')
	{
	printf("Error\n");
	return (98);
	}
	}
    
// Multiply the numbers
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)
	{
	for (int j = len2 - 1; j >= 0; j--)
	{
	int mul = (num1[i] - '0') * (num2[j] - '0');
	int pos1 = i + j;
	int pos2 = i + j + 1;
	int sum = mul + result[pos2];
		result[pos1] += sum / 10;
	result[pos2] = sum % 10;
	}
	}
// Print the result
	int start = 0;

	while (result[start] == 0 && start < len - 1)
	{
	start++;
	}

	for (int i = start; i < len; i++)
	{
	    printf("%d", result[i]);
	}
	printf("\n");
	free(result);
	return (0);
}

