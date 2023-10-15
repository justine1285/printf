#include "main.h"
/**
 * convert_size_number - converts a no to the specified size
 * @x: number to be casted
 * @y: numner indicating the type to be casted
 * Return: casted value of x
 */
long int convert_size_number(long int x, int y)
{
	if (y == S_LONG)
		return(x);
	else if (y == S_SHORT)
		return ((short)x);

	return ((int)x);
}
