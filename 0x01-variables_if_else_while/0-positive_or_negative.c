#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/**
 * Checks if number is positive or negative
 */

if (n > 0)
{
printf("%i", n);
puts(" is positive");
}

else if (n < 0)
{
printf("%i", n);
puts(" is negative");
}

else
{
printf("%i", n);
puts(" is zero");
}
	return (0);
}
