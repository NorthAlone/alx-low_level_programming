#include "lists.h"
void printmebefore(void) __attribute__ ((constructor));

/**
 * printme - print before main
 */

void printmebefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n);
}
