#include "main.h"
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
	int d = 0;
	va_list ap;
	char charr, *ptr;

	va_start(ap, format);
	if (*format == '\0') || (format == NULL)
		return;
	while (format != '\0')
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
				charr = va_arg(ap, char);
				_putchar(charr);
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
