#include "main.h"
int printString(char *s)
{
	return (write(1, s, _strlen(s)));
}
