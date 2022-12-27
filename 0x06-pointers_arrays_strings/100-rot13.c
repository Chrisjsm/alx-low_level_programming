#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: param to be encoded with  rot13
 *
 * Return: address of str
 */
char *rot13(char str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(str + i))
			{
				*(str + i) = b[j];
				break;
			}
		}
	}
	return (str);
}





















