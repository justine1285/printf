#include "main.h"
/**
 * print_non_printable - prints ascii codes in hexa of non printable chars
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: get width
 * @precision: specifes precision
 * @size: specifies size
 * Return: no of chars printe
 */
int print_non_printable(va_list forms, char buffer[], int flags,
		int width, int precision, int size)
{
	int x = 0, y = 0;
	char *str = va_arg(forms, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[x] != '\0')
	{
		if (is_printable(str[x]))
			buffer[x + y] = str[x];
		else
			y += append_hexa_codes(str[x], buffer, x + y);
		x++;
	}
	buffer[x + offset] = '\0';

	return (write(1, buffer, x + y));
}
