#include "main.h"

/**
 * get_flagggs - Calcs active flags
 * @format: arguments
 * @i: take a parameter.
 * Return: Flaggs:
 */
int get_flagggs(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flaggs = 0;
	const char FLAGS_SH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_SH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_SH[j])
			{
				flaggs |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_SH[j] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flaggs);
}

