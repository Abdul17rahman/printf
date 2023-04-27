#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int len3;
    int len4;
    char str[] = "String";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    len3 = _printf("%c\n", 'H');
    len4 = _printf("%s", str);

    printf("length: %i\n", len);
    printf("length 2: %i\n", len2);
    printf("length 3: %i\n", len3);
    printf("length 4: %i\n", len4);
    
    return (0);
}
