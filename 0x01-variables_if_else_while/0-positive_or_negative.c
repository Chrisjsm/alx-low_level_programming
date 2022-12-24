#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - entry point
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if (n > 0 )
		printf("%d is +ve\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is -ve\n", n);
	return (0);
}
