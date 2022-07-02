#include "main.h"
int print_int(va_list args)
{
	int i = 0, count = 0, integer;
	char buf[1024];

	integer = va_arg(args, int);

	if (integer < 0)
	{
		integer *= -1;
		count += _putchar('-');
	}

	while (integer > 9)
	{
		buf[i] = (integer % 10) + '0';
		integer /= 10;
		i++;
	}
	buf[i] = (integer + '0');
	buf[i + 1] = '\0';

	rev_string(buf);

	count += write(1, &buf, _strlen(buf));

	return (count);
}

int printString(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";

	return (write(1, s, _strlen(s)));
}

int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
