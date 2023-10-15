#include "main.h"
/**
 * my_digit - verifies if a char is a digit
 * @c: char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */
int my_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
