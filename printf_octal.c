#include "main.h"

/**
 * print_octal - function prints unsigned number in octal notation
 * @forms: the list of parameters
 * @buffer: Buffer array to handle print
 * @flags:  Calcs active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list forms, char buffer[],
	int flags, int width, int precision, int size)
{

	int y = BUFF_SIZE - 2;
	unsigned long int nos = va_arg(forms, unsigned long int);
	unsigned long int init_nos = nos;

	UNUSED(width);

	nos = convert_size_unsgnd(nos, size);

	if (nos == 0)
		buffer[y--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (nos > 0)
	{
		buffer[y--] = (nos % 8) + '0';
		nos /= 8;
	}

	if (flags & F_HASH && init_nos != 0)
		buffer[y--] = '0';

	y++;

	return (write_unsgnd(0, y, buffer, flags, width, precision, size));
}

