#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int _putchar(char c);
int _puts(const char *s);
int _printf(const char *format, ...);
int handle_d (int n);
int handle_i (int n);
void check_f (const char *format, va_list pr);
int _handler(const char* hand, va_list pr);
int _handlers(const char* prk, va_list pr);

#endif
