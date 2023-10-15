#include "main.h"
/**
 * writePointer - write a memory address
 * @buffer: arrays of char
 * @ind: index
 * @y: length of number
 * @width: specifers width
 * @flags: specifers flags
 * @padd: char representing the padding
 * @extra_c: char representing extra char
 * @padd_start: padding starts
 * Return: number of written chars
 */
int writePointer(char buffer[], int ind, int y, int width,
		int flags, char padd, char extra_c, int padd_start)
{
	int j;

	if (width > y)
	{
		for (j = 3; j < width - y + 3; j++)
			buffer[j] = padd;
		buffer[j] = '\0';
		if (flags & F_MINUS && padd == ' ')
		{
			buffer[--ind] = 'x';
			buffer[--ind] = '0';
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[ind], y) + write(1, &buffer[3], j - 3));
		}
		else if (!(flags & F_MINUS) && padd == ' ')
		{
			buffer[--ind] = 'x';
			buffer[--ind] = '0';
			if (extra_c)
				buffer[--ind] = extra_c;
			return (write(1, &buffer[3], j - 3) + write(1, &buffer[ind], y));
		}
		else if (!(flags & F_MINUS) && padd == '0')
		{
			if (extra_c)
				buffer[--padd_start] = extra_c;
			buffer[1] = '0';
			buffer[2] = 'x';
			return (write(1, &buffer[padd_start], j - padd_start) +
				write(1, &buffer[ind], y - (1 - padd_start) - 2));
		}
	}
	buffer[--ind] = 'x';
	buffer[--ind] = '0';
	if (extra_c)
		buffer[--ind] = extra_c;
	return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
}
