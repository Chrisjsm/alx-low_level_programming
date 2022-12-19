#include "main.h"
/**
 * _puts - print a string and new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	_putchar('\n');
}
