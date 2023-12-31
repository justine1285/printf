#include "main.h"
/**
 * print_decimal - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{
	int k = va_arg(args, int);
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
