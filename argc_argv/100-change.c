#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i, cents, change;

	cents = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	i = 0;
	change = 0;

	while (cents > 0)
	{
		if (cents >= coins[i])
		{
			cents = cents - coins[i];
			change++;
			i = -1;
		}

		i++;
	}

	printf("%d\n", change);
	return (0);
}
