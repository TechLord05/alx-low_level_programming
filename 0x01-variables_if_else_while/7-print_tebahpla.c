#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char w;

	for (w = 'z'; w >= 'a'; w--)
	{
		putchar(w);
	}
	putchar('\n');

	return (0);
}
