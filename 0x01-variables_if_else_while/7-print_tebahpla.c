#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
