#include "main.h"

/**
 * _printf - produces output according to format
 * @format: pointer to the string placeholder
 *
 * Description: This function takes in variable number of args.
 * Return: an interger
 */

int _printf(const char *format, ...)
{
	int i, len = strlen(format);

	va_list ptr;

	va_start(ptr, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			char pl = format[i + 1];

			if (pl == 'c')
			{
				print_char(va_arg(ptr, int));
			}
			if (pl == 's')
			{
				print_str(va_arg(ptr, char *));
			}
		}
		else
			putchar(format[i]);
	}
	va_end(ptr);
	return (len);
}
