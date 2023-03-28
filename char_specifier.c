#include "main.h"

/**
* set_char - specificer c
* @arguments: arguments
* Return: void
*/
int set_char(va_list arguments)
{
    /* Using _putchar and v_arg t output next character */
	_putchar(va_arg(arguments, int));
	return (1);
}
