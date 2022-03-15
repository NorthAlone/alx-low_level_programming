#include "main.h"

/**
 * main - check the function print_alphabet
 *
 *Return: 0 for success check
 **/

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: void
 *
 **/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
