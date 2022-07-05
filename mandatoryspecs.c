#include "main.h"
#include <limits.h>
/**
 * print_int - prints an input integer argument in base 10
 * @args: variadic list input
 * Return: number of chars printed
 */
int print_int(va_list args)
{
	int i = 0, count = 0, minflag = 0;
	long integer;
	char buf[1024];

	integer = va_arg(args, int);

	if (integer == 0)
		return (write(1, "0", 1));

	if (integer)
	{
		if (integer < 0)
		{
			if (integer == INT_MIN)
			{
				integer = INT_MAX;
				minflag = 1;
			}
			else
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
		buf[0] += minflag;

		rev_string(buf);

		count += write(1, &buf, _strlen(buf));
	}
	return (count);
}
/**
  * print_unsigned - prints an input unsigned int arg in base 10
  * @args: variadic list input
  * Return: number of chars printed
  */
int print_unsigned(va_list args)
{
	unsigned int i = 0, count = 0, minflag = 0, integer;
	char buf[1024];

	integer = va_arg(args, unsigned int);

	if (integer)
	{
		while (integer > 9)
		{
			buf[i] = (integer % 10) + '0';
			integer /= 10;
			i++;
		}
		buf[i] = (integer + '0');
		buf[i + 1] = '\0';
		buf[0] += minflag;

		rev_string(buf);

		count += write(1, &buf, _strlen(buf));
	}

	return (count);
}
/**
 * printString - prints a string directly to stdout
 * @args: variadic list input
 * Return: number of chars printed
 */

int printString(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s)
		return (write(1, s, _strlen(s)));
	return (0);

}

/**
 * print_char - duplicate function of _putchar that takes va_arg as argument.
 * I do NOT like this function and want to remove this soon.
 * @args: va_list argument
 * Return: number of chars printed
 */

int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	if (c && c < 128)
		return (write(1, &c, 1));
	return (0);
}

/**
 * _putchar - writes a char directly to stdout
 * @c: input char as int value
 * Return: number of chars printed
 */
int _putchar(char c)
{
	if (c)
		return (write(1, &c, 1));
	return (0);
}
