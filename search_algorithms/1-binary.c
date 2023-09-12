# include "search_algos.h"

/**
 * swap - Function to swap two elements of an array.
 * @array: Array.
 * @i: i index.
 * @j: j index.
 * @size: Size of the array.
 * Return: Nothing
*/
void swap(int *array, int i, int j)
{
	int temp;

	if (i != j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

/**
 * r_quick_sort - Recursive quick sort.
 * @array: Array.
 * @low: Low section of the array to be sorted.
 * @high: High section of the array to be sorted.
 * @arr_size: Size of the array
 * Return: Nothing
*/
void r_quick_sort(int *array, int low, int high, size_t arr_size)
{
	int pivot = array[high];
	int i = low - 1, j;

	if (low >= high || low < 0)
		return;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j);
		}
	}

	i++;
	swap(array, i, high);
	r_quick_sort(array, low, i - 1, arr_size);
	r_quick_sort(array, i + 1, high, arr_size);
}

/**
 * quick_sort - Sorts an array using quick_sort.
 * @array: Array.
 * @size: Size of the array.
 * Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	r_quick_sort(array, 0, size - 1, size);
}

int
binary_search(int *array, size_t size, int value)
{
	size_t i;
	int mid, result;

	if (array == NULL || size == 0)
		return (-1);

	quick_sort(array, size);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	mid = (size - 1) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		return (binary_search(array, mid, value));
	}
	else
	{
		result = binary_search(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		else
			return (result + mid + 1);
	}
}
