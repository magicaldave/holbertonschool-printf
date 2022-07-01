#include "main.h"
int print_int(int integer)
{
	int i = 0;
	char buf[1024];

	while (integer > 9)
	{
		buf[i] = (integer % 10) + '0';
		integer /= 10;
		i++;
	}
	buf[i] = (integer + '0');
	buf[i + 1] = '\0';

	rev_string(buf);

	return (write(1, &buf, _strlen(buf)));
}
