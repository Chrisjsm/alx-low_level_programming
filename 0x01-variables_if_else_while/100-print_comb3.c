#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
<<<<<<< HEAD
 * main - entry
 *
 * Return: Always 0
=======
 * main - ntry
 *
 * Return: always 0
>>>>>>> ae934acd022dd197bc1b36dae92fdc56418db645
 */
int main(void)
{
	int d, p;

<<<<<<< HEAD
	for (d = '0'; d < '9' d++)
=======
	for (d = '0'; d < '9'; d++)
>>>>>>> ae934acd022dd197bc1b36dae92fdc56418db645
	{
		for (p = d + 1; p <= '9'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);
				if (d == '8' && p == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
