#include "main.h"

/**
 * _printf - prints different formats
 * @format: start of the list
 * Return: returns result
 */
int _printf(const char *format, ...)
{
	unsigned int i, result = 0;
	va_list vlist;

	

	va_start(vlist, format); 


	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%' && format[i + 1] != '\0') 
		{
			result += get_fun(format[i + 1], &vlist);
			i++;
		}
		else 
		{
			if (format[i] == '%')
				return (-1);
			_putchar(format[i]);
			result++;
		}
	}
	va_end(vlist);
	return (result);
}