/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i,j;
	//Arr = (int *)malloc(len * sizeof(int));
	if (Arr == NULL && len == 1){
		return NULL;
	}
	else if (len < 0){
		return NULL;
	}
	else{
		for (i = 0; i < len;){
			if (Arr[i] >= num){
				Arr = (int *)realloc(Arr, len+1);
				for (j = len - 1; j <= i; j--){
					Arr[j + 1] = Arr[j];
				}
				Arr[i] = num;
				len++;
				break;
			}
			else
				i++;

		}
		if (Arr[len - 1] < num){
			Arr[len] = num;
			len++;
		}
	}
	return Arr;
}