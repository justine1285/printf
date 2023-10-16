#include "main.h"
/**
 * printf_decimal - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{       
        int x = va_arg(args, int);
        int y, last = n % 10, digit, exp = 1;
        int z = 1;
        
        x = x / 10;
        y = x;
        
        if (last < 0)
        {       
                _putchar('-');
                y = -y;
                x = -x;
                last = -last;
                z++;
        }       
        if (y > 0)
        {       
                while (y / 10 != 0)
                {       
                        exp = exp * 10;
                        y = y / 10;
                }       
                y = x;
                while (exp > 0)
                {       
                        digit = y / exp;
                        _putchar(digit + '0');
                        y = y - (digit * exp);
                        exp = exp / 10;
                        z++;
                }
        }       
        _putchar(last + '0');

        return (z);
}
