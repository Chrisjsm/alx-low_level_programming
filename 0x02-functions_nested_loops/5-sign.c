#include "main.h"

/**
 * print_sign - print sign of a num
 * @n: num be checked
 * Return: 1 && print + in > 0 :-1 && print - if num
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
