#include "main.h":
/**
 * writeBuffer - write a number using a buffer
 * @ind: index at which the number starts on a buffer
 * @buffer: buffer
 * @flags: flags
 * @width: get width
 * @precision: specifies precision
 * @y: length of number
 * @padd: padding char
 * @extra_c: extra char
 * Return: number of printed chars
 */
int writeBuffer(int ind, char buffer[], int flags, int width,
		int precision, int y, char padd, char extra_c){
	int x, padd_start = 1;

	if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0'
			&& width == 0)
		return (0);
	if (precision == 0 && ind == BUFF_SIZE - 2 && buffer[ind] == '0')
		buffer[ind] = padd = ' ';
	if (precision > 0 && precision < y)
		padd = ' ';
	while (precision > y)
		buffer[--ind] = '0', y++;
	if (extra_c != 0)
		y++;
	if (width > y)
	{
		for (x = 1; x < width - y + 1; x++)
			buffer[x] = padd;
		buffer[x] = '\0';
		if (flags & F_MINUS && padd == ' ')
		{
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[ind], length) + write(1, &buffer[1], x - 1));
		}
		else if (!(flags & F_MINUS) && padd == ' ')
		{
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[1], x - 1) + write(1, &buffer[ind], y));
		}
		else if (!(flags & F_MINUS) && padd == '0')
		{
			if (extra_c)
				buffer[--padd_start] = extra_c;
			return (write(1, &buffer[padd_start], x - padd_start)
					+ write(1, &buffer[ind], y - (1 - padd_start)));
		}
	}
	if (extra_c)
		buffer[--ind] = extra_c;
	return (write(1, &buffer[ind], y));
}
