#include "main.h"


/*
 * get_placeholder: Function that gets the placeholder.
 * @c: placeholder char or identifier
 *
 * Description: This function gets the place holder and assigns the func
 * Return: return a pointer to a function.
 * */

int (*get_placeholder(char *c))(int)
{
	pl place[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	int a;

	a = 0;

	while (place[a].ch)
	{
		if (strcmp(c, place[i].ch) == 0)
			return (place[i].f);
		i++;
	}
	return (NULL);
}
