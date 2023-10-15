#include "main.h"

/**
 * print_hexa - Hexadecimal number in lower or upper is printed
 * @forms: List of parameters
 * @mapps_: Array of values to map the number
 * @buffer: Buffer array to handle print
 * @flags:  Calcs active flags
 * @flaggs_: Calcs active flags
 * @width: get width
 * @precision: Precision specifier
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */
int print_hexa(va_list forms, char mapps_[], char buffer[],
	int flags, char flaggs_, int width, int precision, int size)
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
		buffer[y--] = mapps_[nos % 16];
		nos /= 16;
	}

	if (flags & F_HASH && init_nos != 0)
	{
		buffer[y--] = flaggs_;
		buffer[y--] = '0';
	}

	y++;

	return (write_unsgnd(0, y, buffer, flags, width, precision, size));
}

