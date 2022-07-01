#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/* function files */
/* Old Function Prototypes*/
void rev_string(char *src);
int _strlen(char *s);
/* New Function Prototypes */
int _printf(const char *format, ...);
int _putchar(char character);
int printString(char *string);
int print_int(int integer);
int switch_case(char character, va_list args);
#endif
