/**
 * swap_int - swap the values of two ints 
 * @a: pointer to the value of the first int
 * @b: pointer to the value of the second int
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
