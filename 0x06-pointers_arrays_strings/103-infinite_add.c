#include <stdio.h>
#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that stores the result
 * @size_r: size of buffer r
 *
 * Return: pointer to the result, or 0 if buffer size is insufficient
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, j, k, carry = 0;
	char tmp;

	 while (n1[len1] != '\0')
		  len1++;
	 while (n2[len2] != '\0')
		 len2++;
	 if (len1 + 2 > size_r || len2 + 2 > size_r)
		 return (0);
	 for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	 {
		 tmp = carry;
		 if (i >= 0)
			 tmp += n1[i] - '0';
		 if (j >= 0)
			  tmp += n2[j] - '0';
		 carry = tmp / 10;
		 r[k] = tmp % 10 + '0';
	 }
	 r[k--] = '\0';
	 for (i = 0; i < k; i++, k--)
	 {
		 tmp = r[i];
		 r[i] = r[k];
		 r[k] = tmp;
	 }
	 return (r);
}

