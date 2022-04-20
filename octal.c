#include "main.h"

/**
 * coctal - converts decimal to baxe 8
 * @n: number to be converted
 * @d: base 8 int
 *
 * Return: n in base 8
 */
int coctal(int n, int d)
{
	int r;

	if ((n >= 1) && (n <= 7))
		d = n;
	else
	{
		r = n % 8;
		n /= 8;
		d = coctal(n, r);
		d = (10 * d) + r;
	}
	return (d);
}
