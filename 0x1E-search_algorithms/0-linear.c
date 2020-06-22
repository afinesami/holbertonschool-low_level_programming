#include "search_algos.h"
/**
* linear_search - a function that searches for a value in an
*array of integers using the Linear search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: index OR -1
**/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int flag = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}
	if (flag != 1)
		return (-1);
	return (i);
}
