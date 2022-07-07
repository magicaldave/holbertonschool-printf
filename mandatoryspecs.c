#include "main.h"

/**
 * print_int - prints an input integer argument in base 10
 * @args: variadic list input
 * Return: number of chars printed
 */
int print_int(va_list args, char *bigbuf)
{
	int minflag = 0, negflag = 0, count = 0, len = 1;
	long integer, i = 1;

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
			negflag += _putchar('-');
		}

		while ((integer / i) >= 10)
		{
			i *= 10;
			len++;
		}

		for (; count < len ; count++, i /= 10)
		{
			bigbuf[count] = (integer / i) + '0';
			integer %= i;
		}

		if (minflag)
			bigbuf[count - 1] += minflag;


		write(1, bigbuf, count);
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
	unsigned int count = 0, len = 1, integer, i = 1;

	integer = va_arg(args, unsigned int);

	if (integer)
	{
		while ((integer / i) >= 10)
		{
			i *= 10;
			len++;
		}

		for (; count < len ; count++, i /= 10)
		{
			bigbuf[count] = (integer / i) + '0';
			integer %= i;
		}

		write(1, bigbuf, count);
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

	s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	return (write(1, s, _strlen(s)));


}

/**
 * print_char - take next argument as int, pass it to _putchar
 * @args: va_list argument
 * Return: # of chars printed
 */
int print_char(va_list args, char *bigbuf)
{
	int c;

	c = va_arg(args, int);

	return (write(1, &c, 1));
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
