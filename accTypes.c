#include "main.h"


int accString(va_list *vlist)
{
	return (print_string(va_arg(*vlist, char *)));
}


int accChar(va_list *vlist)
{
	return (_putchar(va_arg(*vlist, int)));
}


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