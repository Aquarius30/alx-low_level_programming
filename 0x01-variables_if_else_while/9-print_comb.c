#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after program succession
 */
int main(void)
{
int number;
for (number = 40; number <= 57; number++)
{
putchar(number);
if (number == 57)
{
break;
}
putchar(',');
putchar(' ');
putchar('\n');
}
return (0);
}
