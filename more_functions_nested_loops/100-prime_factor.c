#include <stdio.h>

void 
main(void)
{
	long int i;
	long int n = 17;
	long int h = n/2;

	for (i = h; i >= 2; i--)
	{
		if (n % i == 0)
		{
			h = i;
		}
	}

	printf("%lu\n", h);
}
