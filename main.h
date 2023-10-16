#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


int prints_char(va_list forms);
int print_decimal(va_list args);
int print_int(va_list arg);
int _putchars(char c);
int _printf(const char *format, ...);
int prints_string(va_list forms);
int _strlens(char *alx);
int _strlenx(const char *alx);
int prints_37(void);


#endif /* MAIN_H */
