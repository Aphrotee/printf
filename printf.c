#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - function like printf
 * @format: string format to be printed
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int d = 0, num;
	unsigned int numm, m;
	va_list ap;
	char charr;
	char *ptr;

	va_start(ap, format);
	if ((*format == '\0') || (format == NULL))
		return (d);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == 's')
			{
				ptr = va_arg(ap, char *);
				while (*ptr != '\0')
				{
					_putchar(*ptr);
					d++;
					ptr++;
				}
				format += 2;
			}
			else if (*(format + 1) == 'c')
			{
				charr = va_arg(ap, int);
				_putchar(charr);
				d++;
				format += 2;
			}
			else if ((*(format + 1) == 'd') || (
					*(format  + 1) == 'i'))
			{
				num = va_arg(ap, int);
				print_number(num);
				d++;
				format += 2;
			}
			else if ((*format + 1) == 'u')
			{
				numm = va_arg(ap, int);
				uprint_number(numm);
				d++;
				format += 2;
			}
			else if (*(format + 1) == 'p')
			{
				m = va_arg(ap, int);
				ptr = getp(m);
				printf("%s", ptr);
				d++;
				format += 2;
			}
			else if (*(format + 1) == 'b')
			{
				num = va_arg(ap, int);
				num = cbinary(num, 0);
				print_number(num);
				d++;
				format += 2;
			}
			else if (*(format + 1) == 'X')
			{
				numm = va_arg(ap, int);
				chex(numm);
				d++;
				format += 2;
			}
			else if (*(format + 1) == 'x')
			{
				numm = va_arg(ap, int);
				low_hex(numm);
				d++;
				format += 2;
			}
			else if (*(format + 1) == 'o')
			{
				numm = va_arg(ap, int);
				coctal(numm);
				d++;
				format += 2;
			}
			else
			{
				_putchar(*format);
				d++;
				format++;
			}
		}
		else
		{
			_putchar(*format);
			d++;
			format++;
		}
	}
	return (d);
}
