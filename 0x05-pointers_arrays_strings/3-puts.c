#include "main.h"
/**
 * _puts - print a string and new line to stdout
 * @str: string to be printed
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
