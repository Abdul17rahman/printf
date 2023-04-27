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
	putchar(c);
	return (0);
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
	puts(str);
	return (0);
}
