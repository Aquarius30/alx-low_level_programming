#include "main.h"
#include <stdlib.h>
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		printf("%d", i);
		if (i % 3 = 0)
		{
			printf("Fizz", i);
		}
		else if (i % 5 = 0)
		{
			printf("Buzz". i);
		}
		else if (i % 3 = 0 && i % 5 = 0)
		{
			printf("FizzBuzz", i);
		}
	}
}
