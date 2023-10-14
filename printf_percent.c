#include "main.h"
/**
 * print_percent - prints a percent sign
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @precision: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int print_percent(va_list forms, char buffer[], int flags,
		int width, int precision, int size)
{
	UNUSED(forms);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	return (write(1, "%%", 1));
}
