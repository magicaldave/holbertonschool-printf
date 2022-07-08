#include "main.h"

/**
 * print_int - prints an input integer argument in base 10
 * @args: variadic list input
 * Return: number of chars printed
 */
int print_int(va_list args, char *bigbuf)
{
	int minflag = 0, negflag = 0, count = 0, len = 1, loc = 0;
	long integer, i = 1;

	loc = _strlen(bigbuf);

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
			negflag++;
			bigbuf[loc] = '-';
			loc++;
		}

		while ((integer / i) >= 10)
		{
			i *= 10;
			len++;
		}

		for (; count < len ; count++, i /= 10)
		{
			bigbuf[loc] = (integer / i) + '0';
			integer %= i;
			loc++;
		}
		bigbuf[loc - 1] += minflag;

		return (count + negflag);
	}
	return (-2);
}

/**
  * print_unsigned - prints an input unsigned int arg in base 10
  * @args: variadic list input
  * Return: number of chars printed
  */
int print_unsigned(va_list args, char *bigbuf)
{
	unsigned int count = 0, len = 1, integer, i = 1, loc = 0;

	loc = _strlen(bigbuf);

	integer = va_arg(args, unsigned int);

	if (integer)
	{
		while ((integer / i) >= 10)
		{
			i *= 10;
			len++;
		}

		for (; count < len ; loc++, count++, i /= 10)
		{
			bigbuf[loc] = (integer / i) + '0';
			integer %= i;
		}
	}

	return (count);
}

/**
 * printString - prints a string directly to stdout
 * @args: variadic list input
 * Return: number of chars printed
 */
int printString(va_list args, char *bigbuf)
{
	char *s;
	int loc, len;

	loc = _strlen(bigbuf);

	s = va_arg(args, char *);
	len = _strlen(s);

	if (!s)
		s = "(null)";

	while (*s)
	{
		bigbuf[loc] = *s;
		s++;
		loc++;
	}
	return (len);


}

/**
 * print_char - take next argument as int, pass it to _putchar
 * @args: va_list argument
 * Return: # of chars printed
 */
int print_char(va_list args, char *bigbuf)
{
	int _char, loc = 0;

	loc = _strlen(bigbuf);

	_char = va_arg(args, int);

	bigbuf[loc] = _char;

	return (1);
}

/**
 * _putchar - writes a char directly to stdout
 * @c: input char as int value
 * Return: # of chars printed
 */
int _putchar(char c)
{
	if (c)
		return (write(1, &c, 1));
	return (0);
}
