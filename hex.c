#include "main.h"

/**
 * chex - converts decimal to hexadecimal
 * @n: number to be converted
 *
 * Return: array of n in base 16
 */
char *chex(int n)
{
	int i = 1, j, temp;
	char hex[50], hexdec[50];

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
	i = 1; 
	while (j > 0)
	{
		hexdec[i] = hex[j];
		i++;
		j--;
	}
	return (hwxdwc);
}
