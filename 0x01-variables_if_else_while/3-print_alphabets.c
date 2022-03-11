#include <stdio.h>
/**
 * main - print alphabet in lowercase and then in uppercase
 * Return: 0 for success
 */
int main(void)
{
	char c1, c2;

	for (c1 = 'a'; c1 <= 'z'; c1++)
	{
		putchar(c1);
	}
	
	for (c2 = 'A'; c2 <= 'Z'; c2++)
	{
		putchar(c2);
	}

	putchar('\n');
	return (0);
}
