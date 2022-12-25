#include "main.h"
/**
 * _isalpha - checks for alphet in chars
 * @c: character rep
 * Return: 1 if found else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
