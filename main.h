#ifndef header_file
#define header_file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct place - Struct place
 *
 * @pl: The placeholder
 * @f: The function associated
 *
typedef struct place
{
	char *pl;
} pl_p;
*/


int _printf(const char *format, ...);

int print_char(char c);

int print_str(char *str);

#endif
