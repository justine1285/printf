#include "main.h"
/**
 * print_pointers - prints pointer
 * @forms: value
 * Return: int
 */
int print_pointers(va_list forms)
{
	void *p;
	char *alx = "(nil)";
	long int y;
	int z;
	int j;

	p = va_arg(forms, void*);
	if (p == NULL)
	{
		for (j = 0; alx[j] != '\0'; j++)
		{
			_putchars(alx[j]);
		}
		return (j);
	}
	y = (unsigned long int)p;
	_putchars('0');
	_putchars('x');
	z = printHexextra(y);

	return (z + 2);
}
