#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your code here
	 * Remember:
	 * - do not use a
	 * - do not modify p
	 * - only one statement
	 * - nothing else than than this
	 */
	*(p + 5) = 98;
	/*...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
