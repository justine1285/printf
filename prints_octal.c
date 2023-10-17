#include "main.h"
/**
 * prints_octal - evaluates to octal
 * @forms: list of parameters
 * Return: tally
 */
int prints_octal(va_list forms)
{
	int y, tally = 0;
	int *oct;
	unsigned int nos = va_arg(forms, unsigned int);
	unsigned int nas = nos;

	while (nos / 8 != 0)
	{
		nos = nos / 8;
		tally++;
	}
	tally++;
	oct = malloc(tally * sizeof(int));

	for (y = 0; y < tally; y++)
	{
		oct[y] = nas % 8;
		nas = nas / 8;
	}
	for (y = tally - 1; y >= 0; y--)
		_putchars(oct[y] + '0');
	free(oct);
	return (tally);
}
