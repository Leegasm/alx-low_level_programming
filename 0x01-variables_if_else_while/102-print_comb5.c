#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int f;

for (i = 0 ; i < 10 ; i++)
{

	for (j = 0 ; j <= 10 ; j++)
	{

		for (k = 0 ; k < 10 ; k++)
		{
			for (f = 0 ; f < 10 ; f++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(32);
				putchar('0' + k);
				putchar('0' + f);
				if (!(i == 9 && j == 8))
				{
					putchar(',');
					putchar(32);
				}
				f++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}
