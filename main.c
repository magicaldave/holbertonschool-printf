#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int main(void)
{
	_printf("%i", 1024);
	return (0);
}

int _printf(const char *format, ...)
{
	int integer;
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
				write(1, &integer, 4);
				break;
			}

		}
		i++;
	}
	return (0);
}
