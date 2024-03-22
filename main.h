#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int _printf(const char *format, ...);
int get_fun(char c, va_list *vl);

int print_string(char *);
int print_int(int);
int _putchar(char);

int accInt(va_list *);
int accString(va_list *);
int accChar(va_list *);
int accPercent(va_list *vl);


typedef struct way
{
	char operator;
	int (*f)(va_list *);
} ope;
#endif/*MAIN_H*/
