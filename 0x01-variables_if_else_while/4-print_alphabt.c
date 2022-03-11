#include <stdio.h>
/**
 * main - print alphabet in lowercase except q and e
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
