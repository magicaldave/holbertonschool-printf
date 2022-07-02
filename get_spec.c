#include "main.h"


int (*get_spec(char s))(va_list)
{
	spec specs[] = {
		{"c", print_char},
		{"s", printString},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	unsigned int i = 0;

	while (specs[i].spec != NULL && s != specs[i].spec[0])
		i++;

	return (specs[i].f);
}
