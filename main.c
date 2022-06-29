#include <stdarg.h>
#include <unistd.h>

#include <string.h>
int _printf(const char *format, ...);
int printString(char *s);

int main(void)
{
	_printf("%s", "Hello, World!");

	return (0);
}

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
				write(1, &integer, 1);
				break;
			case 'c':
				integer = va_arg(args, int);
				write(1, &integer, 1);
				break;

			case 's':
				tempStr = va_arg(args, char*);
				printString(tempStr);
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

int printString(char *s)
{
	int i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (0);
}
