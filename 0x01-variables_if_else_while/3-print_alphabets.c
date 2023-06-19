#include <stdio.h>
/**
 * main - prints the alphabets in upper and lower case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alpha;
	char bets;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (bets = 'A'; bets <= 'Z'; bets++)
	{
		putchar(bets);
	}
	putchar('\n');
	return (0);
}
