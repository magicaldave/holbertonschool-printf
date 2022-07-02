#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/* STRUCT */
typedef struct specifier
{
	char *spec;
	int (*f)(va_list);
} spec;
/* Old Function Prototypes*/
void rev_string(char *src);
int _strlen(char *s);
/* New Function Prototypes */
int _printf(const char *format, ...);
/* Subroutines */
int printString(va_list args);
int print_int(va_list args);
int print_char(va_list args);

int _putchar(char c);
int (*get_spec(char s))(va_list);
#endif
