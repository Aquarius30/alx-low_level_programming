#include <stdio.h>
/**
 * main - prints out fizz buzz
 *
 * Return: 0 after code succession
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
			printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
		printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
