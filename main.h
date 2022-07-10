#ifndef MAIN_H
#define MAIN_H

/* MACROS */
#define startprintf do {				\
		va_start(args, format);			\
		bigbuf = calloc(2048, sizeof(char));	\
	} while (0)

#define v_init(var, type) do {				\
			loc = _strlen(bigbuf);		\
			var = va_arg(args, type);	\
		} while (0)

#define writestrtobuf(ptr) for (; *ptr ; bigbuf[loc] = *ptr, ptr++, loc++)

#define writetwochars do {			\
		bigbuf[c] = *(format - 1);	\
		bigbuf[c + 1] = *format;	\
		c += 2 ;			\
	} while (0)

#define endprintf do {				\
		write(1, bigbuf, c);		\
		va_end(args);			\
		free(bigbuf);			\
	} while (0)

#define ABS(x) ((x) * (((x) > 0) - ((x) < 0)))

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/* STRUCT */
/**
 * struct specifier - checks for valid format specifier from printf
 * @spec: character to match against input
 * @f: function pointer to output matching spec
 */
typedef struct specifier
{
	char *spec;
	int (*f)(va_list, char *);
} spec;
/* Old Function Prototypes*/
void rev_string(char *src);
int _strlen(char *s);
/* New Function Prototypes */
/**
 * _printf - print formatted output
 * @format: format string to indicate type of variadic args
 * Return: Number of printed chars
 */
int _printf(const char *format, ...)
	__attribute__((__format__(printf, 1, 2)));
/* Subroutines */
int print_bighex(va_list args, char *bigbuf);
int print_bin(va_list args, char *bigbuf);
int print_char(va_list args, char *bigbuf);
int print_int(va_list args, char *bigbuf);
int print_oct(va_list args, char *bigbuf);
int print_percent(va_list args, char *bigbuf);
int print_smallhex(va_list args, char *bigbuf);
int print_string(va_list args, char *bigbuf);
int print_unsigned(va_list args, char *bigbuf);

int (*get_spec(char s))(va_list, char *);
char *convert(unsigned int num, int base);
#endif
