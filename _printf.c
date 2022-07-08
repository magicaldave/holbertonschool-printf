#include "main.h"
#include <stdlib.h>
/**
  * _printf - print formatted output
  * @format: string to indicate formats to print
  * Return: Total chars printed, or -1 on fails
  */
int _printf(const char *format, ...)
{
	unsigned int c = 0;
	char *bigbuf;
	int (*s)(va_list, char *);
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	bigbuf = malloc (1024 * sizeof(char));

	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
			{
				bigbuf[c] = '%';
				c++;
				format += 2;
			}
			else
			{
				if (!*(format + 1))
				{
					write(1, bigbuf, c);
					return (-1);
				}
				s = get_spec(*++format);
				if (s)
					c += s(args, bigbuf);
				else
				{
					bigbuf[c] = *(format - 1);
					bigbuf[c + 1] = *format;
					c += 2;
				}
				format++;
			}
		}
		else
		{
			bigbuf[c] = *format;
			c++;
			format++;
		}
	}

	write(1, bigbuf, c);

	va_end(args);
	return (c);
}
