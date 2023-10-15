#include "main.h"
/**
 * writeNumber - prints a string
 * @x: list of argument
 * @ind: char type
 * @buffer: buffer array to handle print
 * @flags: calculates active flags
 * @width: get width
 * @precision: specifies precision
 * @size: specifies size
 * Return: number of chars printed
 */
int writeNumber(int x, int ind, char buffer[], int flags,
		int width, int precision, int size)
{
	int y = BUFF_SIZE - ind - 1;
	char padd = ' ', extra_ch = 0;

	UNUSED(size);

	if((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (x) extra_ch = '-';
	else if (flags & F_PLUS)
		extra_ch = '+';
	else if (flags & F_SPACE)
		extra_ch = ' ';
	return (writeNumber(ind, buffer, flags, width, precision, y, padd, extra_ch));
}
