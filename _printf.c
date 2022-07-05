#include "main.h"
/**
  * _printf - print formatted output
  * @format: string to indicate formats to print
  * Return: Total chars printed, or -1 on fails
  */
int _printf(const char *format, ...)
{
	unsigned int c = 0;
	int (*s)(va_list);
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
			{
				c += _putchar('%');
				format += 2;
			}
			else
			{
				if (!*(format + 1))
					return (-1);
				s = get_spec(*++format);
				if (s)
					c += s(args);
				else
				{
					c += write(1, (format - 1), 2);
				}
				format++;
		}
		}
		else
		{
			c += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (c);
}
