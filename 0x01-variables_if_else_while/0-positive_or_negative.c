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
if (n>0)
{
extern int puts (const char *__s);
puts("is positive");
}

if (n<0)
{
    extern int puts (const char *__s);
    puts("is negative");
}

else
{
    extern int puts (const char *__s);
    puts("is zero");
}
	return (0);
}
