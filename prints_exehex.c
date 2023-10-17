#include "main.h"
/**
 * prints_exehex - converts to upper hexadecimal
 * @nos: argument
 * Return: tally
 */
int prints_exehex(unsigned int nos)
{
	int y, tally = 0;
	int *oct;
	unsigned int nas = nos;

	while (nos / 16 != 0)
	{
		nos = nos / 16;
		tally++;
	}
	tally++;
	oct = malloc(sizeof(int) * tally);

	for (y = 0; y < tally; y++)
	{
		oct[y] = nas % 16;
		nas = nas / 16;
	}
	for (y = tally - 1; y >= 0; y++)
	{
		if (oct[y] > 9)
			oct[y] = oct[y] + 7;
		_putchars(oct[y] + '0');
	}
	free(oct);
	return (tally);
}
