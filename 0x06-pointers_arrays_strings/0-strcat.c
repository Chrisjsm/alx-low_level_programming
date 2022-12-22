/**                                                                             
 * strcat - Concatenates the string pointed to by @src, including the x         
 * null byte, to the end of the string pointed to by @dest.                     
 * @dest: A pointer to the string to be concatenated upon.                      
 * @src: The source string to be appended to @dest.                             
 *                                                                              
 * Return: A pointer to the destination string @dest.                           
 */                                                                             
char *strcat(char *dest, const char *src)
{
        int index = 0, dest_len = 0;                                            
#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
        char *s = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (s);
}                          38,1 Bot
-- INSERT --








