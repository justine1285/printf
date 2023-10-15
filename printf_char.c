#include "main.h"
/**
 * printChar - prints a char
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @precision: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int printChar(va_list forms, char buffer[], int flags, int width,
		int precision, int size)
{
	char c = va_arg(forms, int);

	return (writeHandle(c, buffer, flags, width, precision, size));
}
