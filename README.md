# 0x11. C - printf

# Description

This is an implementation of the C function printf(). This function only prints integer numbers, characters and strings onto the output screen.

## Returns

When successfully compiled, _printf() returns total amount of characters printed. If string is null, the return is (null) and if an output error occurs, the function will return -1.

## Function prototype

int _printf(const char **format ...);

Example
```
#include "main.h"

int main(void) { _printf("Hello World!");

return (0);
}

Output

Hello World!
```
## File Descriptions

man_3_printf.1 - has the manual of the _printf function.
main.h - header file that contains function prototypes and structure
_printf.c - recieves string to print
get_print - prints according to format specifier (int, decimals, characters, or strings)
accTypes.c - has the access functions
print_functions.c - has the function that print the all the elements of the input.

Authors

**Victor Colon & Alex Carrasquillo**
