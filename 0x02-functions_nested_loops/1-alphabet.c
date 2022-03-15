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
