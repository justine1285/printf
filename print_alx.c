#include "main.h"
/**
 * _strlens - returns length of string
 * @alx: string pointer
 * Return: y
 */
int _strlens(char *alx)
{
	int y;
	
	for (y = 0; alx[y] != 0; y==)
		;
	return (y);
}
/**
 * _strlenx - strlen function but applied for constant char pointer alx
 * @alx: char pointer
 * Return: y
 */
int _strlenx(const char *alx)
{
	int y;

	for (y = 0; alx[y] != 0; y++)
		;
	return (y);
}
