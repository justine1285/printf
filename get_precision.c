#include "main.h"
/**
 * get_precision - claculates the precision for printing
 * @format: format string to print the argument
 * @x: lit of argument to be printed
 * @list: list of argument
 * Return: precision
 */
int get_precision(const char *format, int *x, va_list list)
{
	int curr_x = *x + 1;
	int precision = -1;

	if (format[curr_x] != '.')
		return (precision);
	precision = 0;

	for (curr_x += 1; format[curr_x] != '\0'; curr_x++)
	{
		if (is_digit(format[curr_x]))
		{
			precision *= 10;
			precision += format[curr_x] - '0';
		}
		else if (format[curr_x] == '*')
		{
			curr_x++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*x = curr_x - 1;

	return (precision);
}
