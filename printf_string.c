#include "main.h"
/**
 * printString - prints a string
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @precision: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int printString(va_list forms, char buffer[], int flags,
		int width, int precision, int size)
{
	int x = 0, y;
	char *str = va_arg(forms, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "  ";
	}

	while (str[x] != '\0')
		x++;

	if (precision >= 0 && precision < x)
		x = precision;

	if (width > x)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], x);
			for (y = width - x; y > 0; y--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (y = width - x; y > 0; y--)
				write(1, " ", 1);
			write(1, &str[0], x);
			return (width);
		}
	}
	return (write(1, str, x));
}
