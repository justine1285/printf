#include "main.h"
/**
 * print_pointers - prints pointer
 * @forms: value
 * Return: int
 */
int print_pointers(va_list forms)
{
	void *p;
	char *k = "(nil)";
	long int y;
	int z, j;

	p = va_arg(forms, void *);
	if (p == NULL)
	{
		for (z = 0; k[z] != '\0'; z++)
			_putchars(k[z]);
		return (z);
	}
	y = (unsigned long int)p;
	_putchars('0');
	_putchars('x');
	j = printHexextra(y);

	return (j + 2);
}
