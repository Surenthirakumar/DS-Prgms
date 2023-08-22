#include <stdio.h>

void findDuplicates(int arr[], int size) 
{
	
	int i,j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("\nDuplicate found: %d\n", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 2, 8, 5, 2, 7, 6, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
	printf("Name :J SURENTHIRA KUMAR\nReg no :192121140");
    printf("\nDuplicate values in the array:\n");
    findDuplicates(arr, size);

    return 0;
}

