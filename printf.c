#include "main.h"

/**
* _printf - function that produces output according to @format
* @format: format specifier
* Return: ADD RETURN PARTNER
*/

int _printf(const char *format, ...)
{
    /* Using va_list data type from stdarg.h to store arguments */
	va_list arguments;
	int counter;


	f_t get_specifier[] = {
		{"c", set_char}, {"%", print_percent},
		{"s", set_string}, {"d", set_decimal},
		{"i", set_decimal}, {NULL, NULL}
	};

	va_start(arguments, format);
	counter = parse_format(format, get_specifier, arguments);
	va_end(arguments);


	return (counter);
}
