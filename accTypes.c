#include "main.h"

/**
 * accString - print strings
 * @vlist: list v
 *
 * return: total charracters printed
 */

int accString(va_list *vlist)
{
	return (print_string(va_arg(*vlist, char *)));
}

/**
 * accChar - print char
 * @vlist: list of args
 *
 * return: 1 if printed correctly
 */

int accChar(va_list *vlist)
{
	return (_putchar(va_arg(*vlist, int)));
}

/**
 * accInt - print number
 * @vlist: list of args
 *
 * return: amount of digits
 */

int accInt(va_list *vlist)
{
	return (print_int(va_arg(*vlist, int)));
}

int accPercent(va_list *vlist)
{
	(void) vlist;

	_putchar('%');
	return (1);
}
