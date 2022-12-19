#include "main.h"
/**
 * swap_int - integer swapper
 *
 * @a: int 1
 * @b: int 2
 * */
void swap_int(int *a, int *b)
{
	int m;
	m = *a;
	*a = *b;
	*b = m;
}
