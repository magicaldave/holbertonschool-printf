#include "main.h"
#include <stdio.h>

/**
 * rev_string - takes a given string as input and reverses it
 * Return: always 0
 * @src: (source) string to be reversed
 */

void rev_string(char *src)
{
	int src_l = 0, dest_l;
	char *dest = src, tmp;

	for (dest_l = 0 ; src[dest_l] != '\0' ; dest_l++)
	{
	}

	dest_l -= 1;

	while (dest_l > src_l)
	{
		tmp = src[src_l];
		src[src_l] = dest[dest_l];
		dest[dest_l] = tmp;
		dest_l--;
		src_l++;
	}
}

/**
 * _strlen - reads 1D array
 * Return: number of characters from input
 * @s: string input to read
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
