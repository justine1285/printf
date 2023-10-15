#include "main.h"
/**
 * append_hexa_code - append ascii in hexadecimal code to buffer
 * @buffer: Arrya of chars
 * @index: index at which to start appending
 * @ascii_code: ASCII CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int index)
{
	char map_to[] = "0123456789ABCDEF";
	/*The hexa format code is 2 digitd long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[index++] = '\\';
	buffer[index++] = 'x';

	buffer[index++] = map_to[ascii_code / 16];
	buffer[index] = map_to[ascii_code % 16];

	return (3);
}
