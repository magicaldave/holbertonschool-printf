#include "main.h"
int print_int(int integer)
{
	int i;
/* call a function to ensure base 10 conversion */
	if (integer < 0)
	{
		write(1, "-", 1);
		integer = -integer;
	}
	if (integer / 10)
		print_int(integer / 10);
	integer = ((integer % 10) + '0');
	i = write(1, &integer, 1);
	return (i);
}
