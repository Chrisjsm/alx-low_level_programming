#include "main.h"
/**
 * swap_int -swaps the values of two integer
 * @a: integer to swap
 * @b: int to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*a = *b;
	*b = m;
}
