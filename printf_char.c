#include "main.h"
/**
 * print_char - prints a char
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @pre: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int print_char(va_list forms, char buffer[], int flags, int width,
		int pre, int size)
{
	char c = va_arg(forms, int);

	return (handle_write_char(c, buffer, flags, width, pre, size));
}
