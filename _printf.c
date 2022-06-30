#include "main.h"
/**
  *
  */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch_case(format[i + 1], args);
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (0);
}
