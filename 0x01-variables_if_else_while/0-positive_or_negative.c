#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    using std::cout; using std::cin;
    using std::endl; using std::string;
    cin >> n;
	if (n>0)
        putchar(n);
        puts("is positive");
    else if (n<0)
        putchar(n);
        puts("is negative");
    else
        putchar(n)
        puts("is zero");
	return (0);
}
