#include "main.h"
/**
  *
  */
int _printf(const char *format, ...)
{
	int integer;
	char *tempStr = "";
	unsigned int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'i':
				integer = va_arg(args, int);
				print_int(integer);
				break;
			case 'c':
				integer = va_arg(args, int);
				_putchar(integer);
				break;
			case 's':
				tempStr = va_arg(args, char*);
				printString(tempStr);
				break;
			case '%':
				_putchar('%');
				break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	return (0);
}
