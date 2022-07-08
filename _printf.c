#include "main.h"

/**
  * _printf - print formatted output
  * @format: string to indicate formats to print
  * Return: Total chars printed, or -1 on fails
  */

int _printf(const char *format, ...)
{
	unsigned int c = 0;
	char *bigbuf;
	va_list args;
	int (*s)(va_list, char*);

	if (!format)
		return (-1);
	startprintf; /* va_start, allocate 2048 B to write */

	for (; *format; format++)
	{
		if (*format == '%')
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
				writetwochars; /* add prev & curr char, c + 2 */
			}
		}
		else
		{
			bigbuf[c] = *format;
			c++;
		}
	}
	endprintf; /* write buffer, va_end, free buffer */
	return (c);
}
