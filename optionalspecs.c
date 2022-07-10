#include "main.h"
/**
 * print_realstring - prints a string directly to stdout
 * @args: variadic list input
 * @bigbuf: destination string (2048)
 * Return: number of chars printed
 */
int print_realstring(va_list args, char *bigbuf)
{
	char *s, *invalid;
	int len, loc;

	v_init(s, char *); /* va_arg + strlen(bigbuf) */

	if (!s)
		s = "(null)";

	for (len = 0 ; *s && (*s < 32 || *s >= 127); s++, len += 3)
	{
		bigbuf[loc] = '\\';
		bigbuf[loc + 1] = 'x';
		bigbuf[loc + 2] = '0';

		invalid = convert(*s, 16);

		for (loc += 3; *invalid ; invalid++, loc++, len++)
		{
			bigbuf[loc] = *invalid;
		}
	}

	writestrtobuf(s);


	return (len);
}
