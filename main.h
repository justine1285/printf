#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct format - Struct op
 *
 * @format: The format.
 * @fn: The function associated.
 */
struct format
{
	char format;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct format format_t - Struct op
 *
 * @format: The format.
 * @format_t: The function associated.
 */
typedef struct format format_types;

int _printf(const char *format, ...);
int handlePrint(const char *format, int *x,
va_list list, char buffer[], int flags, int width, int precision, int size);


/* Functions to print chars and strings */
int printChar(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int printString(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int printPercent(va_list forms, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int printInt(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int printBinary(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int printUnsigned(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list forms, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list forms, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list forms, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list forms, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int printPointer(va_list forms, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *x);
int get_width(const char *format, int *x, va_list list);
int get_precision(const char *format, int *x, va_list list);
int get_size(const char *format, int *x);

/*Function to print string in reverse*/
int printReverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int printRot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int writeHandle(char c, char buffer[],
	int flags, int width, int precision, int size);
int writeNumber(int x, int ind, char buffer[],
	int flags, int width, int precision, int size);
int writeBuffer(int ind, char buffer[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int writePointer(char buffer[], int ind, int y,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsigned_num(int x, int ind,char buffer[],
	int flags, int width, int precision, int size);

/*utils*/
int my_printable(char);
int append_hexa_code(char, char[], int);
int my_digit(char);

long int convert_size_number(long int x, int y);
long int convert_size_unsgnd(unsigned long int x, int y);

#endif /* MAIN_H */
