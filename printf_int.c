#include "main.h"
/**
 * print_int - print integer
 * @forms: the list of parameters
 * @buffer: Buffer array to handle print
 * @flags: to calculate the active flags
 * @width: get width
 * @size: to specify the size
 * @precision: to get the specific precision
 * Return: Number of chars printed
 */
int print_int(va_list forms, char buffer[], int flags,
		int width, int precision, int size)
{

	int k = BUFF_SIZE - 2;
	int neg = 0;
	long int n = va_arg(forms, long int);
	unsigned long int nos;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[k--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	nos = (unsigned long int)n;
	if (n < 0)
	{
		nos = (unsigned long int)((-1) * n);
		neg = 1;
	}
	while (nos > 0)
	{
		buffer[k--] = (nos % 10) + '0';
		nos /= 10;
	}

	k++;

	return (write_number(neg, k, buffer, flags, width, precision, size));
}
