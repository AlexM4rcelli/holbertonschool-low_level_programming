# include "3-calc.h"

int
main(int argc, char *argv[])
{
	int a;
	int b;
	char *op = argv[2];
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(op);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp("%", op) == 0 || strcmp("/", op) == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
