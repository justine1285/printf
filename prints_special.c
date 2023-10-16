#include "main.h"
/**
 * print_special - prints special string
 * @forms: form
 * Return: number of chars to be printed
 */
int print_special(va_list forms)
{
	char *t;
	int y, lens = 0;
	int form;

	t = va_arg(forms, char *);
	if (t == NULL)
		t = "(null)";
	for (y = 0; t[y] != '0'; y++)
	{
		if (t[y] < 32 || t[y] >= 127)
		{
			_putchars('\\');
			_putchars('x');
			lens = lens + 2;
			form = t[y];
			if (form < 16)
			{
				_putchars('0');
				lens++;
			}
			lens = lens + prints_exehex(form);
		}
		else
		{
			_putchars(t[y]);
			lens++;
		}
	}
	return (lens);
}
