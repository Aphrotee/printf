#include "main.h"
#include <string.h>

/**
 * cbinary - converts decimal to binary
 * @n: number to be converted
 *
 * Return: n in base 2
 */
int cbinary(int n)
{
	int i, *a, p, d;

	for(i = 0; n > 0; i++)
	{
		p = n % 2;
		a[i] = p + '0';
		n = n / 2;
	}
	a = strrev(a);
	d = atoi(a);
	return (d);
}
