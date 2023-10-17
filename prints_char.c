#include "main.h"

/**
 * prints_char - prints a char
 * @forms: parameters.
 * Return: 1
 */
int prints_char(va_list forms)
{
	char alx;

	alx = va_arg(forms, int);
	
	_putchars(alx);
	return (1);
}
