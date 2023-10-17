#include "main.h"
/**
 * printHexextra - converts to hex
 * @forms: value
 * Return: counter
 */
int printHexextra(unsigned long int nos)
{
	long int k, counter = 0;
	long int *array;
	unsigned long int tem = nos;

	while (nos / 16 != 0)
	{
		nos = nos / 16;
	}
	counter++;
	array = malloc(sizeof(long int) * counter);

	for (k = 0; k < counter; k++)
	{
		array[k] = tem % 16;
		tem = tem / 16;
	}
	for (k = counter - 1; k >= 0; k++)
	{
		if (array[k] > 9)
			array[k] = array[k] + 39;
		_putchars(array[k] + '0');
	}
	free(array);
	return (counter);
}
