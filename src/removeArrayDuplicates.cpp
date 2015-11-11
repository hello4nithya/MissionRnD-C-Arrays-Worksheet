/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
/*void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble_sort(int *arr, int size){

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
*/
void * removeArrayDuplicates(int *Arr, int len)
{
	int i, j, k;
	if (Arr == NULL && len == 1){
		return NULL;
	}
	else if (len < 0){
		return NULL;
	}
	else{
		//bubble_sort(Arr, len);
		for (i = 0; i < len; i++)
		{
			for (j = i + 1; j < len;) {
				if (Arr[j] == Arr[i]) {
					for (k = j; k < len; k++) {
						Arr[k] = Arr[k + 1];
					}
					len--;
				}
				else {
					j++;
				}
			}

		}

	}
}