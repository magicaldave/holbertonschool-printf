#include "main.h"

/**
 * convert - converts numbers to strings in other bases
 * @num: number to convert to str
 * @base: number base to convert to
 * Return: string containing converted number
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[33];
	char *ptr;

	ptr = &buffer[32];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
/**
 * print_bin - prints input in base 2
 * @args: variadic list input
 * @bigbuf: destination string (2048)
 * Return: # of chars written
 */
int print_bin(va_list args, char *bigbuf)
{
	char *num;
	int loc, len;

	num = convert(va_arg(args, int), 2);

	loc = _strlen(bigbuf);
	len = _strlen(num);

	writestrtobuf(num);

	return (len);
}
