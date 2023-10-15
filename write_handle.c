#include "main.h"
/**
 * writeHandle - writes a string
 * @c: char types
 * @buffer: buffer array to handle print
 * @flags: calculates active flags
 * @width: get width
 * @precision: specifies precision
 * @size: specifies size
 * Return: number of chars printed
 */
int writeHandle(char c, char buffer[], int flags,
		int width, int precision, int size)
{
	int x = o;
	char padd = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';

	buffer[x++] = c;
	buffer[x] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (x = 0; x < width -1; x++)
			buffer[BUFF_SIZE - x - 2] = padd;
		if (flags & F_MINUS)
			return (write(1, &buffer[0], 1) +
					write(1, &buffer[BUFF_SIZE - x - 1], width - 1) +
					write(1, &buffer[0], 1));
	}
	return (write(1, &buffer[0], 1));
}
