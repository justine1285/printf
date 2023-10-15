#include "main.h"

/**
 * print_hexadecimal - unsigned number in hexadecimal notation to be printed
 * @forms: List of args
 * @buffer: Buffer array to handle print
 * @flags:  Calcs active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_hexadecimal(va_list forms, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(forms, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
