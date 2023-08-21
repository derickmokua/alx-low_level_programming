#include "main.h"
#include <stdio.h>

/**
* _atoi - Converts a string to an integer
* @s: Pointer to the string to convert
* Return: The integer value of the string
*/

int _atoi(char *s)
{
	int sign = 1, res = 0;
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr == '-')
			sign *= -1;
		else if (*ptr >= '0' && *ptr <= '9')
			res = res * 10 + (*ptr - '0');
		else if (res > 0)
			break;
		ptr++;
	}
	return (res * sign);
}
