#include "main.h"

/**
 * _isupper - check for uppercase
 * @x:The number to be checked
 * Return: 1 for uppercase 0 for other
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
