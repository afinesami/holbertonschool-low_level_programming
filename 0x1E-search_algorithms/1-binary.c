#include "search_algos.h"
/**
* prar - prints array
* @array: array
* @start: start point
* @end: ending point
* Return: nothing
**/
void prar(int *array, size_t start, size_t end)
{

	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

/**
* binary_search - a function that searches for a value in a
*sorted array of integers using the Binary search algorithm
* @array: pointer to the first element of the array
* @size: is the number of elements in array
* @value: value to search for
* Return: index OR -1
**/
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right;
	int middle;

	right = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		return (array[left]);
	}
	while (right >= left)
	{
		if (left == 0 && right == 0)
			return (-1);
		prar(array, left, right);
		middle = (right + left) / 2;
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle;
		}
	}
	return (-1);
}
