#include "main.h"
/**
 * printPointer - prints the value of a pointer
 * @forms: list of arguments
 * @buffer: buffer array to handle print
 * @flags: claculates active flags
 * @width: get width
 * @precision: specifies the precision
 * @size: specifers the size
 * Return: no of chars printed
 */
int printPointer(va_list forms, char buffer[], int flags
		int width, int precision, int size)
{
	char x = 0, y = ' ';
	int ind = BUFF_SIZE - 2, length = 2, y_start = 1;
	/* length = 2, for '0x' */

	unsigned long num_addrs;
	char map_to[] = "0123456789abcdef";
	void *addrs = va_arg(forms, void*);

	UNUSED(width);
	UNUSED(size);

	if (addrs == NULL)
		return (write(1, "(nil)", 5));

	buffer[BUFF_SIZE - 1] = '\0';
	UNUSED(precision);
	num_addrs = (unsigned long)addrs;
	while (num_addrs > 0)
	{
		buffer[ind--] = map_to[num_addrs % 16];
		num_addrs /= 16;
		length++;
	}

	if ((falgs & F_ZERO) && !(flags & F_MINUS))
		y = '0';
	if (flags & F_PLUS)
		extra_c = '+', length++;
	else if (flags & F_SPACE)
		extra_c = ' ', length++;
	ind++;
	/* return (write(1, &buffer[x], BUFF_SIZE - x - 1));*/
	return (writePointer(bufer, ind, legth, width, flags,
				y, extra_c, y_start));
}
