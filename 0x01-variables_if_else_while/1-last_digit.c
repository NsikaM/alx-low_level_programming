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
printf("Last digit of ");
printf("%i", n);
printf(" is ");
printf("%i", n % 10);
printf(" and is greater than 5\n");
}

else if (n != 0)
{
printf("Last digit of ");
printf("%i", n);
printf(" is ");
printf("%i", n % 10);
printf(" and is less than 6 and not 0\n");
}
else
{
printf("Last digit of ");
printf("%i", n);
printf(" is ");
printf("%i", n % 10);
printf(" and is 0\n");
}
	return (0);
}
