#include "main.h"
/**
 * write_unsigned_num - writes an unsigned number
 * @x: number indicating if the number is negative
 * @ind: index
 * @buffer: array of chars
 * @flags: specifies flags
 * @width: specifies width
 * @precision: specifies precision
 * @size: specifies size
 * Return: Nu,ber of written chars
 */
int write_unsigned_num(int x, int ind, char buffer[], int flags,
		int width, int precision, int size)
{
	int y = BUFF_SIZE - ind - 1, z = 0;
	char padd = ' ';

	UNUSED(x);
	UNUSED(size);

	if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		return (0);
	if (precision > 0 && precision < y)
		padd = ' ';
	while (precision > length)
	{
		buffer[--ind] = '0';
		y++;
	}
	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (width > y)
	{
		for (z = 0; z < width - y; z++)
			buffer[z] = '\0';
		if (flags & F_MINUS)
		{
			return (write(1, &buffer[ind], length) + write(1, &buffer[0], z));
		}
		else
		{
			return (write(1, &buffer[0], z) + write(1, &buffer[ind], y));
		}
	}
	return (write(1, &buffer[ind], y));
}
