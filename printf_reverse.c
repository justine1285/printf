#include "main.h"
/**
 * printReverse - prints reverse string
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: calculates flags
 * @width: gets width
 * @size: specifies size
 * @precision: specifies precision
 * Return: no of chars printed
 */
int printReverse(va_list forms, char buffer[], int flags,
		int width, int precision, int size)
{
	char *str;
	int x, y = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	str = va_arg(forms, char *);

	if (str == NULL)
	{
		UNUSED(precision);

		str = ")Null(";
	}
	for (x = 0; str[x]; x++)
		;
	for (x = x - 1; x >= 0; x--)
	{
		char z = str[x];

		write(1, &z, 1);
		y++;
	}
	return (y);
}
