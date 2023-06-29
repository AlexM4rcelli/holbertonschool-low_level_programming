#include <stdio.h>

void
print_diagsums(int *a, int size)
{
	int i, sumR, sumL;

	sumR = 0;
	sumL = 0;

	for (i = 0; i < (size * size);)
	{
		sumR = sumR + a[i];
		i = i + size + 1;
	}
	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		sumL = sumL + a[i];
	}
	printf("%d, %d\n", sumR, sumL);
}
