#include "main.h"
#include <stdlib.h>

/**
 * chex - converts decimal to hexadecimal and prints it
 * @n: number to be converted
 *
 * Return: integer
 */
int chex(unsigned int n)
{
	int i = 1, j, k = 0;
	unsigned int temp;
	char hex[50];

	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hex[i++] = temp;
		n = n / 16;
	}
	j = i - 1;
	while (j > 0)
	{
		_putchar(hex[j]);
		j--;
		k++;
	}
	return (k);
}
/**
 * low_hex - converts decimal to hexadecimal and prints it
 * @n: number to be converted
 *
 * Return: integer
 */
int low_hex(unsigned int n)
{
	int i = 1, j, k = 0;
       	unsigned int temp;
	char hex[50];

	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		hex[i++] = temp;
		n = n / 16;
	}
	j = i - 1;
	while (j > 0)
	{
		_putchar(hex[j]);
		j--;
		k++;
	}
	return (k);
}
