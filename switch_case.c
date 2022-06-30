#include "main.h"
/**
  *
  */

void switch_case(char x, va_list args)
{
	int i;
	char c, *tempStr;

	switch (x)
	{
	case 'i':
		i = va_arg(args, int);
		print_int(i);
		break;
	case 'c':
		c = va_arg(args, int);
		_putchar(c);
		break;
	case 's':
		tempStr = va_arg(args, char*);
		printString(tempStr);
		break;
	case '%':
		_putchar('%');
		break;
	}
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
