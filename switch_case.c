#include "main.h"
/**
  *
  */

int switch_case(char x, va_list args)
{
	int i;
	char chars = 0, *tempStr;

	switch (x)
	{
	case 'i':
		i = va_arg(args, int);
		chars += print_int(i);
		break;
	case 'c':
		i = va_arg(args, int);
		chars += _putchar(i);
		break;
	case 's':
		tempStr = va_arg(args, char*);
		chars += printString(tempStr);
		break;
	case '%':
		chars += _putchar('%');
		break;
	}
	return (chars);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
