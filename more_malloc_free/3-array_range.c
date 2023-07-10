# include <stdlib.h>
int
*array_range(int min, int max)
{
	int *array;
	int l, i;

	if (min > max)
		return (NULL);

	l = max - min;
	i = 0;
	array = malloc((l * sizeof(int)) + sizeof(int));

	if (!array)
		return (NULL);

	while (i <= l)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
