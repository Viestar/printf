#include "main.h"

/**
* set_string - specificer string
* @arguments: arguments
* Return: total characters
*/
int set_string(va_list arguments)
{
	int index;
	char *string;

	/* Fetching the next string frm the list */
	string = va_arg(arguments, char*);

	if (string == NULL)
	{
		string = "(null)";
	}

	/* Looping through each string to output the character */
	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}

	return (index);
}
