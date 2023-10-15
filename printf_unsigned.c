#include "main.h"

/**
 * print_unsigned - this function prints an unsigned number.
 * @forms: includes list of parameters
 * @buffer: Buffer array to handle print
 * @flags:  Calc active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters to be printed
 */
int print_unsigned(va_list forms, char buffer[],
	int flags, int width, int precision, int size)
{
	int y = BUFF_SIZE - 2;
	unsigned long int nos = va_arg(forms, unsigned long int);

	nos = convert_size_unsgnd(nos, size);

	if (nos == 0)
		buffer[y--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (nos > 0)
	{
		buffer[y--] = (nos % 10) + '0';
		nos /= 10;
	}

	i++;

	return (write_unsgnd(0, y, buffer, flags, width, precision, size));
}
