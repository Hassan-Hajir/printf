#include "main.h"
/**
 *print_decimal - prints a decimal using recursion
 *@value: Value to print
 *Return: 0
 */
int print_decimal(int value)
{
	int count = 0;
	/* print '-' for negative numbers */
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	if (value / 10)
		count += print_decimal(value / 10);
	count += _putchar(value % 10 + '0');
	return (count);
}
