#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    cin >> n
	if (n>0)
        cout << n << "is positive";
    else if (n<0)
        cout << n << "is negative";
    else
        cout << n << "is zero";
	return (0);
}
