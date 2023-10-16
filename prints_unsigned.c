#include "main.h"
/**
 * prints_unsigned - prints an integer
 * @args: prints parameters
 * Return: number of chars printed
 */
int prints_unsigned(va_list args)
{
	unsigned int k = va_arg(args, unsigned int);
	int y, last = k % 10, digit, exp = 1;
	int z = 1;

	k = k / 10;
	y = k;

	if (last < 0)
	{
		_putchars('-');
		y = -y;
		k = -k;
		last = -last;
		z++;
	}
	if (y > 0)
	{
		while (y / 10 != 0)
		{
			exp = exp * 10;
			y = y / 10;
		}
		y = k;
		while (exp > 0)
		{
			digit = y / exp;
			_putchars(digit + '0');
			y = y - (digit * exp);
			exp = exp / 10;
			z++;
		}
	}
	_putchars(last + '0');

	return (z);
}

