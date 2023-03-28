#include "main.h"
/**
* parse_format - prints a formated string.
* @format: A string containing all the desired characters.
* @get_specifier: A list of all the posible functions.
* @arguments: A list containing all the argumentents passed to the program.
* Return: A total count of the characters printed.
*/

int parse_format(const char *format, f_t get_specifier[], va_list arguments)
{
	int a, b, count, total_characters = 0;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; get_specifier[b].specifier != NULL; b++)
			{
				if (format[a + 1] == get_specifier[b].specifier[0])
				{
					count = get_specifier[b].function_caller(arguments);
					if (count == -1)
					{
						return (-1);
					}
					total_characters += count;
					break;
				}
			}
			if (get_specifier[b].specifier == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					total_characters = total_characters + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			_putchar(format[a]);
			total_characters++;
		}
	}
	return (total_characters);
}
