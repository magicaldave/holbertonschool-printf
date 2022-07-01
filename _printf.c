#include "main.h"
/**
  *
  */
int _printf(const char *format, ...)
{
	unsigned int c = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			c += switch_case(*++format, args);
		}
		else
			c += _putchar(*format);
		format++;
	}
	return (c);
}
