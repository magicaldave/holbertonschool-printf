#include "main.h"
/**
  *
  */
int _printf(const char *format, ...)
{
	unsigned int c = 0;
	int (*s)(va_list);
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
			{
				_putchar('%');
				format += 2;
			}
			else
			{
				s = get_spec(*++format);
				if (s)
					c += s(args);
				else
				{
					c = _putchar(*format) + _putchar(*(format + 1));
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
