# include "3-calc.h"

int
main(int argc, char *argv[])
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];
	int (*func)(int, int) = get_op_func(op);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((op ==  ops[3].op || op == ops[4].op) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
