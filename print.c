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
	int length = 0;

	char ch;
	va_list ptr;

	va_start(ptr, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ch = *format;

			if (ch == 'c')
				length += print_char(va_arg(ptr, int));
			if (ch == 's')
				length += print_str(va_arg(ptr, char *));
			if (ch == '%')
				length += print_char(ch);
			if (ch == 'i' || ch == 'd')
				length += print_int(va_arg(ptr, int));
			format++;
		}
		else
		{
			length += print_char(*format);
			format++;
		}
	}
	va_end(ptr);
	return (length);
}
