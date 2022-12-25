#include "main.h"
/**
 * _islower - pls checkfor lower case
 * @c: represents lower cased letter
 * Return: 1 if c else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
