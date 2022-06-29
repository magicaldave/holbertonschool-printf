#include <stdarg.h>
#include <unistd.h>
<<<<<<< HEAD
#include <string.h>
int _printf(const char *format, ...);
int printString(char *s);
int main(void)
{
	_printf("Word: %s", "Hello, World!");
=======

int _printf(const char *format, ...);

int main(void)
{
	_printf("%c%c%c%c%c", 69, 68, 67, 66, 65);
>>>>>>> f868266eaf3a93dad844f21fe581eb308100b615
	return (0);
}

int _printf(const char *format, ...)
{
	int integer;
<<<<<<< HEAD
	char *tempStr = "";
=======
>>>>>>> f868266eaf3a93dad844f21fe581eb308100b615
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
<<<<<<< HEAD
			case 's':
				tempStr = va_arg(args, char*);
				printString(tempStr);
				break;
			}

			i++;
		}


		write(1, &format[i], 1);

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
=======
			}

		}
>>>>>>> f868266eaf3a93dad844f21fe581eb308100b615
		i++;
	}
	return (0);
}
