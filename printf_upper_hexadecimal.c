#include "main.h"

/**
 * print_hexa_upper - Function prints unsigned number in upper hexadecimal notation
 * @forms: List of args
 * @buffer: Buffer array to handle print
 * @flags:  Calcs active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters to be printed
 */
int print_hexa_upper(va_list forms, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(forms, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
