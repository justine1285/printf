#include "main.h"
/**
 * printf_char - prints a char
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @precision: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int print_char(va_list forms, char buffer[], int flags, int width,
		int precision, int size)
{
	char c = va_arg(forms, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
