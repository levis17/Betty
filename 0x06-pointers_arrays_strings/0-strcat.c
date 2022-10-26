#include "main.h"
/**
* strcat - Concatenates the string pointed to by @src, including the terminating
* null byte, to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be appended to @dest.
*
* Return: A pointer to the destination string @dest.
*/
char *strcat(char *dest, const char *src)
{
	int index = 0, count = 0;

	while (dest[index++])
		count++;

	for (index = 0; src[index]; index++)
		dest[count++] = src[index];

	return (dest);
}

