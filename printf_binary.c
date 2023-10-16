#include "main.h"
/**
 * print_binary - converts to binary
 * @forms: argument
 * Return: integer
 */
int print_binary(va_list forms)
{
	int k = 0;
	int y = 0;
	int z, i = 1, j;
	unsigned int num = va_arg(forms, unsigned int);
	unsigned int x;

	for (z = 0; z < 32; z++)
	{
		x = ((i << (32 - z)) & num);
		if (x >> (31 - z))
			k = 1;
		if (k)
		{
			j = x >> (31 - z);
			_putchars(j + 48);
			y++;
		}
	}
	if (y == 0)
	{
		y++;
		_putchars('0');
	}
	return (y);
