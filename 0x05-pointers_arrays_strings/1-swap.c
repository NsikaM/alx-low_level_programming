/**
 * swap_int - swaps the values of two integers
 * using teo input parameters
 *
 * @a: int parameter 1
 * @b: int parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
