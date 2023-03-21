#include <stdio.h>
/**
 *main - returns main function
 *Return: Retuns 0
 *
 *
 */
int main(void)
{
	int firstDigits;
	int secondDigits;
	int thirdDigits;

	for (firstDigits = 0; firstDigits < 10; firstDigits++)
	{
		for (secondDigits = 1; secondDigits < 10; secondDigits++)
		{
			for (thirdDigits = 2; thirdDigits < 10; thirdDigits++)
			{
				if (firstDigits < secondDigits && secondDigits < thirdDigits)
				{
					putchar(firstDigits + '0');
					putchar(secondDigits + '0');
					putchar(thirdDigits + '0');
					if (firstDigits + secondDigits + thirdDigits != 24)
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
