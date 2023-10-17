#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - match the conversion specifier for printf
 * @id: type char pointer for the specifier
 * @f: type pointer to function for the specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int prints_char(va_list forms);
int print_decimal(va_list args);
int _putchars(char c);
int _printf(const char *format, ...);
int prints_string(va_list forms);
int _strlens(char *alx);
int _strlenx(const char *alx);
int prints_percent(__attribute__((unused))va_list list);
int print_ints(va_list args);
int print_binary(va_list forms);
int print_pointers(va_list forms);
int printHexextra(unsigned long int nos);
int prints_unsigned(va_list args);
int prints_octal(va_list forms);
int prints_hexadec(va_list forms);
int prints_hexupp(va_list forms);
int prints_exehex(unsigned int nos);
int print_special(va_list forms);
int print_rot13ed(va_list forms);
int *_strcpy(char *dest, char *src);
int printf_rev(va_list args);
int rev_string(char *s);

#endif /* MAIN_H */
