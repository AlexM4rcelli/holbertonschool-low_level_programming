#include "main.h"

void
reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++, n--)
	{
		int aux = a[n - 1];

		a[n - 1] = a[i];
		a[i] = aux;
	}
}
