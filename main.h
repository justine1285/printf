#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


int prints_char(va_list forms);
int print_decimal(va_list args);
<<<<<<< HEAD
int print_int(va_list arg);
int _putchars(char c);
int _printf(const char *format, ...);
int prints_string(va_list forms);
int _strlens(char *alx);
int _strlenx(const char *alx);
int prints_37(void);

=======
int print_ints(va_list args);
int print_binary(va_list forms);
>>>>>>> 4c0b2abd18496224708ffac35cfbdc9f223349ea

int prints_unsigned(va_list args);
int prints_octal(va_list forms);
int prints_hexadec(va_list forms);
int prints_hexupp(va_list forms);
int prints_exehex(unsigned int nos);
int print_special(va_list forms);

#endif /* MAIN_H */
