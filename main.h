#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


/**
* struct formatter - This is a typedef struct.
* @specifier: Pointer type char.
* @function_caller: Pointer to call the function.
*/

typedef struct formatter
{
	char *specifier;
	int (*function_caller)();
} f_t;

int _printf(const char *format, ...);
int print_percent(__attribute__((unused))va_list arguments);
int length_of_integer(int n);
int parse_format(const char *format, f_t get_opt[], va_list arguments);
int set_string(va_list arguments);
int set_char(va_list arguments);
int _putchar(char c);
int set_decimal(va_list arguments);
int get_length(char *str __attribute__((__unused__)), va_list arguments);

#endif /* MAIN_H */
