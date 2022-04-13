#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: pointer to function
 * Return: print name to stdout
 */

void print_name(char *name, void (*f)(char *));
{
	void (*p)(char *);

	p = f;
	if (!name || !p)
		return;
	f(name);
}
