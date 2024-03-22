#include "main.h"

/**
 * get_print - connectes functions
 * @c: string
 * @vl: variadic list
 * Return: returns 0
 */
int get_fun(char c, va_list *vlist)
{
	int i;

	ope way[] = {
		{'c', accChar},
		{'s', accString},
		{'d', accInt},
		{'i', accInt},
		{'%', accPercent},
		{'\0', NULL}
	};

	for (i = 0; way[i].operator != '\0'; i++)
	{
		if (way[i].operator == c)
		{
			return (way[i].f(vlist));
		}
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
