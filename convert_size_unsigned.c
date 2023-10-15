#include "main.h"
/**
 * convert_size_unsigned - casts a number to the specified size
 * @x: number to be casted
 * @y: number indicating the type to be casted
 * Return: casted value of number
 */
long int convert_size_unsigned(unsigned long int x, int y)
{
	if (y == S_LONG)
		return (x);
	else if (y == S_SHORT)
		return ((unsigned short)x);

	return ((unsigned int)x);
}
