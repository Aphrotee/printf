#include "main.h"

/**
 * getp - recieves pointer as input and passes it into pts
 * @x: pointer
 *
 * Return: string
 */
char *getp(unsigned int x)
{
	return (pts(&x));
}
/***
 * pts - converts pointer to string and prints
 * @x: pointer
 *
 * Return: string
 */
char *pts(void *x)
{
	char *t = (char *)x;
	return (t);
}
