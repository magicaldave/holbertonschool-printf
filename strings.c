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

int print_rot13string(va_list args, char *bigbuf)
{
	char *s;
	int len = 0, c = 0, loc;

	v_init(s, char *); /* va_arg & loc = _strlen(bigbuf) */

	if (!s)
		s = "(null)";

	for (; s[c] ; c++, loc++, len++)
	{
		if (!((s[c] >= 97 && s[c] <= 122) || (s[c] >= 65 && s[c] <= 90)))
		{
			bigbuf[loc] = s[c];
			continue;
		}
		if (!((s[c] > 109) || (s[c] > 77 && s[c] < 91)))
		{
			bigbuf[loc] = (s[c] + 13);
			continue;
		}
			bigbuf[loc] = (s[c] - 13);
	}

	return (len);
}
