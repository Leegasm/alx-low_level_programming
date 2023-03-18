#include<stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int f;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (f = 2 ; f < 10 ; f++)
			{
				if (i < j && j < f)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(f + '0');
					if (i + j + f != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
