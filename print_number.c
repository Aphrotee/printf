#include "main.h"

/**
 * print_number - prints out input
 * @n: input
 * Return: void
 */
void print_number(int n)
{
	int a, b;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		a = n / 10;
		b = n % 10;
		if (a != 0)
		{
			print_number(a);
			_putchar(b + '0');
		}
		else
			_putchar(b + '0');
	}
	else
		_putchar('0');
}
/**
 * uprint_number - prints out unsigned input
 * @n: unsigned int to be printed
 *
 * Return: nothing
 */
void uprint_number(unsigned int n)
{
	unsigned int a, b;

	if (n != 0)
	{
		a = n / 10;
		b = n % 10;
		if (a != 0)
		{
			uprint_number(a);
			_putchar(b + '0');
		}
		else
			_putchar(b + '0');
	}
	else
		_putchar('0');
}
