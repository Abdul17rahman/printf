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

	va_list fmt;

	va_start(fmt, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			char place = format[i] + 1;

			if (place == 'c')
			{
				char c = va_arg(fmt, int);

				putchar(c);
			}
			if (place == 's')
			{
				char *str = va_arg(fmt, char *);

				write(STDOUT_FILENO, str, sizeof(str));
			}
		}
		else
		{
			putchar(format[i]);
		}
	}
	va_end(fmt);
	return (len);
}
