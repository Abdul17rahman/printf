#include "main.h"

/**
 * print_char - prints characters
 * @c: character to be printed
 *
 * Description: This function prints characters
 * Return: 0 for success
 */

int print_char(char c)
{
	if (!c)
		return (-1);
	return (write(1, &c, sizeof(char)));
}

/**
 * print_str - prints a string
 * @str: pointer to a string
 *
 * Description: Prints the string passed in.
 * Return: 0 for success
 */

int print_str(char *str)
{
	if (!str)
	{
		write(1, "(null)", strlen("(null)"));
		return (-1);
	}
	return (write(1, str, strlen(str)));
}
