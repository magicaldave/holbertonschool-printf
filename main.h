#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
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
int _printf(const char *format, ...);
/* Subroutines */
int printString(va_list args, char *bigbuf);
int print_int(va_list args, char *bigbuf);
int print_unsigned(va_list args, char *bigbuf);
int print_char(va_list args, char *bigbuf);


int rec_int(int integer, char *bigbuf);
int _putchar(char c);
int (*get_spec(char s))(va_list, char *);
#endif
