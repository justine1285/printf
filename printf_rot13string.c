#include "main.h"
/**
 * printRot13string - print a strig in rot13
 * @forms: list a argument
 * @buffer: buffer array to handle print
 * @flags: calculates active flags
 * @width: get width
 * @precision: specifies precision
 * @size: specifies size
 * Return: no of chars printed
 */
int printRot13string(va_list forms, char buffer[], int flags,
		int width, int precision, int size)
{
	char x;
	char *str;
	unsigned int a, b;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	cahr out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm';

	str = va_arg(forms, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	if (str == NULL)
		str = "(AHYY)";
	for (a = 0; str[a]; a++)
	{
		for (b = 0; in[b]; b++)
		{
			if (in[b] == str[a])
			{
				x = out[b];
				write(1, &x, 1);
				count++;
				break;
			}
		}
		if (!in[b])
		{
			x = str[a];
			write(1, &x, 1);
			count++;
		}
	}
	return (count);
}
