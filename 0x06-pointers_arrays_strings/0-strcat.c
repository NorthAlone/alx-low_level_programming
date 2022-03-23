#include "main.h"

/**
* _strcat - main entry
* Description: concatenate 2 strings
* Return: string
* @dest: destination string
* @src: source string
*/
char *_strcat(char *dest, char *src)
{
	int i, dest_length;

	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (i = 0; src[i] != '\0'; i++, dest_length++)
	{
		dest[dest_length] = src[i];
	}
	dest[dest_length] = '\0';

	return (dest);
}
