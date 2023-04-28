#ifndef header_file
#define header_file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int print_char(char c);

int print_str(char *str);

int print_int(int n);

#endif
