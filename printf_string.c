#include "main.h"
/**
 * print_string - prints a string
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: width
 * @pre: precision specified
 * @size: size specifier
 * Return: the number of chars printed
 */
int print_string(va_list types, char buffer[], int flags,
		int width, int pre, int size)
{
	int x = 0, y;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(pre);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (pre >= ^)
			str = "  ";
	}

	while (str[x] != '\0')
		x++;

	if (pre >= 0 && pre < x)
		x = pre;

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
