#include<stdio.h>

/**
 * main - Entry Point -krrish
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int firstNum = 0, secondNum;

	while (firstNum <= 99)
	{
		secondNum = firstNum;
		while (secondNum <= 99)
		{
			if (secondNum != firstNum)
			{
				putchar((firstNum / 10) + 48);
				putchar((firstNum % 10) + 48);
				putchar(' ');
				putchar((secondNum / 10) + 48);
				putchar((secondNum % 10) + 48);

				if (firstNum != 98 || secondNum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');

	return (0);
}
