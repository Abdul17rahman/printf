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

    len = _printf("Let's try%% to printf a simple sentence.\n");
    len2 = printf("Let's try%% to printf a simple sentence.\n");

    len3 = _printf("%c\n", 'H');

    _printf("%c", 'S');

    _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    _printf("%s", "This sentence is retrieved from va_args!\n");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    _printf("%%");
    _printf("Should print a single percent sign: %%\n");
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("css%ccs%scscscs", 'T', "Test");
    _printf(NULL);
    _printf("%c", '\0');
    _printf("%");
    _printf("%!\n");
    _printf("%K\n");

    printf("length: %i\n", len);
    printf("length 2: %i\n", len2);
    printf("length 3: %i\n", len3);
    
    return (0);
}
