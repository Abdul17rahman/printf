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
	int len = strlen(format);

	char *copy = strdup(format);

	va_list ptr;

	va_start(ptr, format);

	while (*copy != '\0')
	{
		if (*copy == '%')
		{
			copy++;
			switch (*copy)
			{
				case 'c':
					print_char(va_arg(ptr, int));
					break;
				case 's':
					print_str(va_arg(ptr, char *));
					break;
			}
			copy++;
		}
		else
		{
			putchar(*copy);
			copy++;
		}
	}
	va_end(ptr);
	return (len);
}
