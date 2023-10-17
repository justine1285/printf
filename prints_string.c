#include "main.h"
/**
 * prints_string - prints a string
 * @forms: list of parameters
 * Return: amount of characters printed
 */

int prints_string(va_list forms)
{
	char *alx;
	int y;
	int length;

	alx = va_arg(forms, char *);
	if (alx == NULL)
	{
		alx = "(null)";
		length = _strlenx(alx);
		for (y = 0; y < length; y++)
			_putchars(alx[y]);
		return (length);
	}
	else
	{
		length = _strlenx(alx);
		for (y = 0; y < length; y++)
		_putchars(alx[y]);
		return (length);
	}
}
