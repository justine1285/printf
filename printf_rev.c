#include "main.h"
/**
 * printf_rev - function that prints a string in reverse
 * @args: type struct va_arg where is allocated argument
 * Return: string
 */
int printf_rev(va_list args)
{
	char *k = va_arg(args, char*);
	int z;
	int y = 0;

	if (k == NULL)
		k = "(null)";
	while (k[y] != '\0')
		y++;
	for (z = y - 1; z >= 0; z--)
		_putchars(k[z]);
	return (y);
}
