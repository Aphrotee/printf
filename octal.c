#include "main.h"

/**
 * coctal - converts decimal to octal and prints it
 * @n: number to be converted
 *
 * Return: nothing
 */
void coctal(int n)
{
	int i = 1, j, temp;
	char oct[50];

	while (n != 0)
	{
		temp = n % 8;
		oct[i++] = temp;
		n = n / 8;
	}
	j = i - 1;
	while (j > 0)
	{
		_putchar(oct[j]);
		j--;
	}
}
