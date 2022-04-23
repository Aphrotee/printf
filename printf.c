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
			if (*(format + 1) == '%')
			{
				_putchar('%');
				d++;
				format += 2;
			}
			else if (*(format + 1) == 's')
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
				d += print_number(num);
				format += 2;
			}
			else if (*(format + 1) == 'u')
			{
				numm = va_arg(ap, int);
				d += uprint_number(numm);
				format += 2;
			}
			else if (*(format + 1) == 'p')
			{
				m = va_arg(ap, int);
				ptr = getp(m);
				while (*ptr != '\0')
				{
					_putchar(*ptr);
					ptr++;
				}
				d++;
				format += 2;
			}
			else if (*(format + 1) == 'b')
			{
				numm = va_arg(ap, int);
				numm = cbinary(numm, 0);
				d += uprint_number(numm);
				format += 2;
			}
			else if (*(format + 1) == 'X')
			{
				numm = va_arg(ap, int);
				d += chex(numm);
				format += 2;
			}
			else if (*(format + 1) == 'x')
			{
				numm = va_arg(ap, int);
				d += low_hex(numm);
				format += 2;
			}
			else if (*(format + 1) == 'o')
			{
				numm = va_arg(ap, int);
				d += coctal(numm);
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
