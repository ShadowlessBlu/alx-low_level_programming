#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comb;

	for (comb = 0; comb <= 9; comb++)
	{
		putchar(comb + '0');
		if (comb != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
