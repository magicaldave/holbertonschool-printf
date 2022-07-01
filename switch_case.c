#include "main.h"
#include <string.h>
/**
  *
  */

int switch_case(char x, va_list args)
{
	int i, c;
	char *tempStr;

	if (!i)
		i = 0;

	switch (x)
	{
	case 'i':
		c = va_arg(args, int);
		i += print_int(c);
		break;
	case 'c':
		c = va_arg(args, int);
		i += _putchar(c);
		break;
	case 's':
		tempStr = va_arg(args, char*);
		i += printString(tempStr);
		break;
	case '%':
		i += _putchar('%');
		break;
	}

	return (i);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
