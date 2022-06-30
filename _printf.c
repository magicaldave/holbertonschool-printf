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
				write(1, &integer, 1);
				break;
			case 's':
				tempStr = va_arg(args, char*);
				printString(tempStr);
				break;
			case '%':
				write(1, "%", 1);
				break;
			}
			i++;
		}
		else
		{
			write(1, &format[i], 1);
		}
		i++;
	}
	return (0);
}
