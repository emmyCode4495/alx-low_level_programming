#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point of the program
 *Return: The integer after running successfully
 *Description: Prints comn=bination of group of three nubers
 *
 *
 */
int main(void)
{
	int dgt1 = 0;
	int dgt2;
	int dgt3;

	int dgt_1;
	int dgt_2;
	int dgt_3;

	while (dgt1 <= 98)
	{
		dgt2 = (dgt1 / 10 + '0');
		dgt3 = (dgt1 % 10 + '0');
		dgt_1 = 0;

		while (dgt_1 <= 99)
		{
			dgt_2 = (dgt_1 / 10 + '0');
			dgt_3 = (dgt_1 % 10 + '0');

			if (dgt1 < dgt_1)
			{
				putchar(dgt2);
				putchar(dgt3);
				putchar(' ');
				putchar(dgt_2);
				putchar(dgt_3);

				if (dgt1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dgt_1++;
		}
		dgt1++;
	}
	putchar('\n');
	return (0);
}
