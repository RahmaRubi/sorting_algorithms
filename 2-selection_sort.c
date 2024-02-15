#include <stdio.h>
#include "sort.h"

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
		int *new_num = &array[i];
		int j = i;

		for (j = i + 1; j < (int) size; j++)
			if (array[j] < *new_num)
				new_num = &array[j];

		if (old_num != new_num)
		{
			int temp = *old_num;
			*old_num = *new_num;
			*new_num = temp;
			print_array(array, size);
		}
	}
}
