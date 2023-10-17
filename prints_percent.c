#include "main.h"
/**
 * prints_percent - prints percentage
 * @format: format
 * @forms: va_list
 * Return: number of characters printed
 */

int prints_percent(char *format, va_list forms)
{
	(void)format;
	(void)forms;
	_putchars('%');
	return (1);
}
