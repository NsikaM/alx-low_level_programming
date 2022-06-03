#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n % 10 > 5)
{
puts("Last digit of ");
printf("%i", n);
puts(" and is greater than 5");
}

else if (n == 0)
{
puts("Last digit of ");
printf("%i", n);
puts(" and is 0");
}

else
{
puts("Last digit of ");
printf("%i", n);
puts(" and is less than 6 and not 0");
}
	return (0);
}
