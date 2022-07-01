#include "main.h"
/**
  *
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0, c = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			c += switch_case(format[i + 1], args);
			i++;
		}
		else
			c += _putchar(format[i]);
		i++;
	}
	return (c);
}
