#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively
  * @array: A pointer of the subarray to search.
  * @left: The starting index.
  * @right: The ending index.
  * @value: The value to search for.
  *
  * Return: -1, the index where the value is located.
  */
int adv_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (adv_binary_recursive(array, left, i, value));
	return (adv_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: NULL, -1, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
