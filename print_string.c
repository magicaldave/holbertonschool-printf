#include "main.h"
int printString(char *s)
{
	int i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}

	return (0);
}
