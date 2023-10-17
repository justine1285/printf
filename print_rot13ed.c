#include "main.h"
/**
 * print_rot13ed = convert to rot13
 * @forms: argument
 * Return: counter
 */
int print_rot13ed(va_list forms)
{
	int k, z, counter = 0;
	int y = 0;
	char *s = va_arg(forms, char*);
	char i[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char j[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null";
	for (k = 0; s[k]; k++)
	{
		y = 0;
		for (z = 0; i[z] && !y; z++)
		{
			if (s[k] == i[z])
			{
				_putchars(j[z]);
				counter++;
				y = 1;
			}
		}
		if (!y)
		{
		_putchars(s[k]);
		counter++;
		}
	}
	return (counter);
}

