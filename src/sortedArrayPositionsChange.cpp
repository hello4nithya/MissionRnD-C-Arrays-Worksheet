/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble_sort(int arr[], int size){

	int swapped = 1, index = 0;

	while (swapped == 1){

		swapped = 0;

		for (index = 1; index < size; index++){

			if (arr[index] < arr[index - 1]){
				swap(&arr[index], &arr[index - 1]);

				swapped = 1;
			}

		}

	}

}

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr == NULL && len == 1){
		return NULL;
	}
	else if (len < 0){
		return NULL;
	}
	else{
		bubble_sort(Arr, len);
	}
}