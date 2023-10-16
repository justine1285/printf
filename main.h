#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int print_decimal(va_list args);
int print_ints(va_list args);
int print_binary(va_list forms);
int print_pointers(va_list forms);
int printHexextra(unsigned long int num);

#endif /* MAIN_H */
