#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * cbinary - converts decimal to binary
 * @n: number to be converted
 *
 * Return: n in base 2
 */
int cbinary(int n)
{
	int i, p, d;
	char a[15];

	n /= 2;
	for(i = 0; n > 0; i++)
	{
		p = n % 2;
		a[i] = p + '0';
		n = n / 2;
	}
	d = atoi(a);
	return (d);
}
