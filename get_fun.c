#include "main.h"

/**
 * get_fun - connectes functions
 * @c: string
 * @vlist: variadic list
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

/**
 * print_string - Imprime una cadena de caracteres
 * @vlist: Lista de argumentos variable
 *
 * Return: La cantidad de caracteres impresos
 */
int print_string(va_list *vlist)
{
    return (accString(vlist));
}

/**
 * _putchar - print char in stdout
 * @c: the char
 *
 * Return: print 1 if is correct
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_int - print number
 * @vlist: list of args
 *
 * Return: amount of digits
 */
int print_int(va_list *vlist)
{
    return (accInt(vlist));
}
