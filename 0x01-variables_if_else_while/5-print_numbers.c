#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
