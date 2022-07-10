#include "main.h"

/**
 * get_spec - printf helper that uses an input char to determine return
 * @s: char input to match valid printf specifier
 * Return: pointer to desired function
 */


int (*get_spec(char s))(va_list, char *)
{
	spec specs[] = {
		{"%", print_percent},
		{"b", print_bin},
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"o", print_oct},
		{"s", print_string},
		{"u", print_unsigned},
		{"x", print_smallhex},
		{"X", print_bighex},
		{NULL, NULL}
	};
	unsigned int i = 0;

	while (specs[i].spec != NULL && s != specs[i].spec[0])
		i++;

	return (specs[i].f);
}
