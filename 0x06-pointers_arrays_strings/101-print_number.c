#include "main.h"
/**
 * print_number - print an int
 * @n: the int to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_print('_');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
