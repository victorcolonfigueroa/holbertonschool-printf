#include "main.h"
/**
 * _putchar - Print
 * @c: char
 * Return: size
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
