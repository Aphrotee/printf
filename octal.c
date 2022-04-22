#include "main.h"

/**
 * coctal - converts decimal to octal and prints it
 * @n: number to be converted
 *
 * Return: nothing
 */
void coctal(unsigned int n)
{
	int i = 1, j;
	unsigned int temp;
	char oct[50];

	while (n != 0)
	{
		temp = n % 8;
		temp += 48;
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
