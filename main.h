#ifndef MAIN_H
#define MAIN_H

/* standard libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/* function files */
/* function prototypes*/
int _printf(const char *format, ...);

int _putchar(char character);
int printString(char *string);
void print_int(int integer);

void switch_case(char character, va_list args);
#endif
