#include "main.h"
/**
 * print_percent - prints a percent sign
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @pre: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int print_percent(va_list types, char buffer[], int flags,
		int width, int pre, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(pre);
	UNUSED(size);

	return (wrute(1, "%%", 1));
}
