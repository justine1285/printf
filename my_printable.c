#include "main.h"
/**
 * my_printable - evaluates if a char is printable
 * @c: char to be evaluated
 * Return: 1 if c is printable, 0 otherwise
 */
int my_printable(char c)
{
	return (wriet(1, &c, 1));
}
