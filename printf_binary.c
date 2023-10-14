#include "main.h"
/**
 * print_binary_ - Function prints an unsigned number
 * @forms: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: To calc active flags.
 * @width: get width
 * @precision: Specific precision
 * @size: Size specifier
 * Return: The number of characters to be printed.
 */
int print_binary(va_list forms, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int n, g, y, sum;
	unsigned int b[32];
	int tally;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(forms, unsigned int);
	g = 2147483648;
	b[0] = n / g;
	for (y = 1; y < 32; y++)
	{
		g /= 2;
		b[y] = (n / g) % 2;
	}
	for (y = 0, sum = 0, tally = 0; y < 32; y++)
	{
		sum += b[y];
		if (sum || y == 31)
		{
			char s = '0' + b[y];

			write(1, &s, 1);
			tally++;
		}
	}
	return (tally);
}
