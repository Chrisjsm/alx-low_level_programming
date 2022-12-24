#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints 10byes of buffer per time
 * @b:buffer to be printed
 * @size: no of bytes from the buffer
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; bytes < size; byte += 10)
	{
		printf("%08x:", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf(" ");
			else
				printf("%02x", *(b + index + byte))
				if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			 else
				 if (*(b + index + byte) >= 31 && *(b + index + byte) <= 126)
				  printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		 if (byte >= size)
			 continue;
		 printf("\n");
	}
	 if (size <= 0)
		 printf("\n");
}
