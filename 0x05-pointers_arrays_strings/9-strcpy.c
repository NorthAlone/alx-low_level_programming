#include "main.h"

/**
* *_strcpy - entry point
* Description : copy a string to another one.
* @dest: copy destination
* @src: source of copy
* Return:void
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
