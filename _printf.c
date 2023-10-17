#include "main.h"
/**
 * _printf - selects the correct function to print
 * @format: identifier
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", prints_string}, {"%c", prints_char}, {"%%", prints_percent},
		{"%i", print_ints}, {"%d", print_decimal}, {"%r", printf_rev},
		{"%R", print_rot13ed}, {"%b", print_binary},
		{"%u", prints_unsigned}, {"%o", prints_octal}, {"%x", prints_hexadec},
		{"%X", prints_hexupp}, {"%S", print_special}, {"%p", print_pointers}
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
				length += m[k].fun(args);
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
