#include "main.h"
/**
 * handlePrint - prints an argument based on its type
 * @format: format string to print the argument
 * @list: list of argument to be printed
 * @ind: ind
 * @buffer: buffer array to handle orint
 * @flags: calculaes active flags
 * @width: calculate the width
 * @precision: specifies the precision
 * @size: specifies the size
 * @fn: function
 * Return: 1 or 2
 */
int handlePrint(const char *format, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size)
{
	int x, y = 0, printed_chars = -1;
	format_types format_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};

	for (x = 0; format_types[x].format != '\0'; x++)
		if (format[*ind] == format_types[x].format)
		return (format_types[x].fn(list, buffer, flags, width, precision, size));

	if (format_types[x].format == '\0')
	{
		if (format[*ind] == '\0')
			return (-1);
		y += write(1, "%%", 1);
		if (format[*ind - 1] == ' ')
			y += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (format[*ind] == ' ' && format[*ind] != '%')
			--(*ind);
			if (format[*ind] == ' ')
			--(*ind);
			return (1);
		}
			y += write(1, &format[*ind], 1);
			return (y);
	}
	return (printed_chars);
}
