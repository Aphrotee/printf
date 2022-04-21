#include "main.h"

/**
 * coctal - converts decimal to base  and 8 prints it
 * @n: number to be converted
 * @d: base 8 int
 *
 * Return: n in base 8
 */
int coctal(int n, int d)
{
	int r;

	if ((n >= 1) && (n <= 7))
	{
		d = n;
		_putchar(d + '0');
	}
	else
	{
		r = n % 8;
		n /= 8;
		d = coctal(n, r);
		_putchar(r + '0');
		d = (10 * d) + r;
	}
	return (d);
}
