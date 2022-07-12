#include "main.h"

/**
 * _strlen - reads 1D array
 * Return: number of characters from input
 * @s: string input to read
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}

	return (i);
}

int print_revstring(va_list args, char *bigbuf)
{
	char *s;
	int len = 0, count = 0, loc;

	v_init(s, char *); /* va_arg & loc = _strlen(bigbuf) */

	if (!s)
		s = "(null)";

	len = (_strlen(s) - 1);

	for (; s[len] ; bigbuf[loc] = s[len], len--, loc++, count++)
	{
		/* writes the string to buffer backwards and counts */
	}

	return (count);
}
