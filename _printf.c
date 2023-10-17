#include "main.h"
/**
 * _printf - selects the correct function to print
 * @format: identifier
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%s", printf_s}, {"%c", printf_c}, {"%%",  printf_percent},
		{"%i", print_int}, {"%d", printf_decimal}, {"%r", printf_rev},
		{"%R", printf_rot13ed}, {"%b", printf_binary},
		{"%u", prints_unsigned}, {"%o", prints_octal}, {"%x", prints_hexx},
		{"%X", prints_hexupp}, {"%S", prints_special}, {"%p", printf_pointer}
	};

	va_list args;
	int z = 0, k, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[z] != '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (m[k].id[0] == format[z] && m[k].id[1] == format[z + 1])
			{
				length += cm[k].f(args);
				z = z + 2;
				goto Here;
			}
			k--;
		}
		_putchars(format[z]);
		length++;
		z++;
	}
	va_end(args);
	return (length);
}
