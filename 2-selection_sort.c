#include <stdio.h>
#include <stdlib.h>

/**
* print_arr - prints an array
* @arr: array
* @size: array size
*/


void print_arr(int *arr, int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/**
* selection_sort - sorts an array using selection sort
* @array: array
* @size: array size
*/

void selection_sort(int *array, size_t size)
{
	int i = 0;

	for (i = 0; i < (int) size; i++)
	{
		int *old_num = &array[i];
		int *new_num;
		int j = i;

		for (j = i + 1; j < (int) size; j++)
			if(*new_num < *old_num)
				new_num = &array[j];

		if (old_num != new_num)
		{
			int *temp = old_num;
			old_num = new_num;
			new_num = temp;
			print_arr(array, size);
		}
	}
}
