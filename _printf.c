#include "main.h"
/**
 * _printf - function
 * @format: chain of charts
 * return: _printf
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				write(1, &c, 1);
				count++;
			} else if (*format == 's')
			{
				char *s = va_arg(args, char*);

				while (*s)
				{
					write(1, s, 1);
					s++;
					count++;
				}
			} else if (*format == '%')
			{
				write(1, "%", 1);
				count++;
			}
		} else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

