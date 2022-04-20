#include "main.h"

/**
 * cbinary - converts decimal to binary
 * @n: number to be converted
 * @d: base 2 int
 *
 * Return: n in base 2
 */
int cbinary(int n, int d)
{
	int r;

	if (n == 1)
		d = 1;
	else
	{
		r = n % 2;
		n /= 2;
		d = cbinary(n, r);
		d = (10 * d) + r;
	}
	return (d);
}
